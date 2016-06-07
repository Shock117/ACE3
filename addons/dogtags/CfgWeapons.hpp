#define ACE_DOGTAG_ITEM(DOGTAGBASE,DOGTAGID) \
    class DOGTAGBASE##_##DOGTAGID : DOGTAGBASE { \
        author = ECSTRING(common,ACETeam); \
        scope = 1; \
        scopeArsenal = 0; \
        scopeCurator = 0; \
        descriptionShort = QUOTE(DOGTAGID); \
        GVAR(tagID) = DOGTAGID; \
    }

class CfgWeapons {
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class ACE_dogtag: ACE_ItemCore {
        author = ECSTRING(common,ACETeam);
        scope = 0;
        displayName = CSTRING(itemName);
        model = QUOTE(PATHTOF(data\ace_dogtag.p3d)); //@todo?
        //picture = QUOTE(PATHTOF(images\picture.paa)); @todo
        class ItemInfo: InventoryItem_Base_F {
            mass = 0; //too small to for 1 ?
        };
    };
    ACE_DOGTAG_ITEM(ACE_dogtag,1);
    ACE_DOGTAG_ITEM(ACE_dogtag,2);
    ACE_DOGTAG_ITEM(ACE_dogtag,3);
    ACE_DOGTAG_ITEM(ACE_dogtag,4);
    ACE_DOGTAG_ITEM(ACE_dogtag,5);
    ACE_DOGTAG_ITEM(ACE_dogtag,6);
    ACE_DOGTAG_ITEM(ACE_dogtag,7);
    ACE_DOGTAG_ITEM(ACE_dogtag,8);
    ACE_DOGTAG_ITEM(ACE_dogtag,9);
    ACE_DOGTAG_ITEM(ACE_dogtag,10);
    ACE_DOGTAG_ITEM(ACE_dogtag,11);
    ACE_DOGTAG_ITEM(ACE_dogtag,12);
    ACE_DOGTAG_ITEM(ACE_dogtag,13);
    ACE_DOGTAG_ITEM(ACE_dogtag,14);
    ACE_DOGTAG_ITEM(ACE_dogtag,15);
    ACE_DOGTAG_ITEM(ACE_dogtag,16);
    ACE_DOGTAG_ITEM(ACE_dogtag,17);
    ACE_DOGTAG_ITEM(ACE_dogtag,18);
    ACE_DOGTAG_ITEM(ACE_dogtag,19);
    ACE_DOGTAG_ITEM(ACE_dogtag,20);
    ACE_DOGTAG_ITEM(ACE_dogtag,21);
    ACE_DOGTAG_ITEM(ACE_dogtag,22);
    ACE_DOGTAG_ITEM(ACE_dogtag,23);
    ACE_DOGTAG_ITEM(ACE_dogtag,24);
    ACE_DOGTAG_ITEM(ACE_dogtag,25);
    ACE_DOGTAG_ITEM(ACE_dogtag,26);
    ACE_DOGTAG_ITEM(ACE_dogtag,27);
    ACE_DOGTAG_ITEM(ACE_dogtag,28);
    ACE_DOGTAG_ITEM(ACE_dogtag,29);
    ACE_DOGTAG_ITEM(ACE_dogtag,30);
    ACE_DOGTAG_ITEM(ACE_dogtag,31);
    ACE_DOGTAG_ITEM(ACE_dogtag,32);
    ACE_DOGTAG_ITEM(ACE_dogtag,33);
    ACE_DOGTAG_ITEM(ACE_dogtag,34);
    ACE_DOGTAG_ITEM(ACE_dogtag,35);
    ACE_DOGTAG_ITEM(ACE_dogtag,36);
    ACE_DOGTAG_ITEM(ACE_dogtag,37);
    ACE_DOGTAG_ITEM(ACE_dogtag,38);
    ACE_DOGTAG_ITEM(ACE_dogtag,39);
    ACE_DOGTAG_ITEM(ACE_dogtag,40);
    ACE_DOGTAG_ITEM(ACE_dogtag,41);
    ACE_DOGTAG_ITEM(ACE_dogtag,42);
    ACE_DOGTAG_ITEM(ACE_dogtag,43);
    ACE_DOGTAG_ITEM(ACE_dogtag,44);
    ACE_DOGTAG_ITEM(ACE_dogtag,45);
    ACE_DOGTAG_ITEM(ACE_dogtag,46);
    ACE_DOGTAG_ITEM(ACE_dogtag,47);
    ACE_DOGTAG_ITEM(ACE_dogtag,48);
    ACE_DOGTAG_ITEM(ACE_dogtag,49);
    ACE_DOGTAG_ITEM(ACE_dogtag,50);
    ACE_DOGTAG_ITEM(ACE_dogtag,51);
    ACE_DOGTAG_ITEM(ACE_dogtag,52);
    ACE_DOGTAG_ITEM(ACE_dogtag,53);
    ACE_DOGTAG_ITEM(ACE_dogtag,54);
    ACE_DOGTAG_ITEM(ACE_dogtag,55);
    ACE_DOGTAG_ITEM(ACE_dogtag,56);
    ACE_DOGTAG_ITEM(ACE_dogtag,57);
    ACE_DOGTAG_ITEM(ACE_dogtag,58);
    ACE_DOGTAG_ITEM(ACE_dogtag,59);
    ACE_DOGTAG_ITEM(ACE_dogtag,60);
    ACE_DOGTAG_ITEM(ACE_dogtag,61);
    ACE_DOGTAG_ITEM(ACE_dogtag,62);
    ACE_DOGTAG_ITEM(ACE_dogtag,63);
    ACE_DOGTAG_ITEM(ACE_dogtag,64);
    ACE_DOGTAG_ITEM(ACE_dogtag,65);
    ACE_DOGTAG_ITEM(ACE_dogtag,66);
    ACE_DOGTAG_ITEM(ACE_dogtag,67);
    ACE_DOGTAG_ITEM(ACE_dogtag,68);
    ACE_DOGTAG_ITEM(ACE_dogtag,69);
    ACE_DOGTAG_ITEM(ACE_dogtag,70);
    ACE_DOGTAG_ITEM(ACE_dogtag,71);
    ACE_DOGTAG_ITEM(ACE_dogtag,72);
    ACE_DOGTAG_ITEM(ACE_dogtag,73);
    ACE_DOGTAG_ITEM(ACE_dogtag,74);
    ACE_DOGTAG_ITEM(ACE_dogtag,75);
    ACE_DOGTAG_ITEM(ACE_dogtag,76);
    ACE_DOGTAG_ITEM(ACE_dogtag,77);
    ACE_DOGTAG_ITEM(ACE_dogtag,78);
    ACE_DOGTAG_ITEM(ACE_dogtag,79);
    ACE_DOGTAG_ITEM(ACE_dogtag,80);
    ACE_DOGTAG_ITEM(ACE_dogtag,81);
    ACE_DOGTAG_ITEM(ACE_dogtag,82);
    ACE_DOGTAG_ITEM(ACE_dogtag,83);
    ACE_DOGTAG_ITEM(ACE_dogtag,84);
    ACE_DOGTAG_ITEM(ACE_dogtag,85);
    ACE_DOGTAG_ITEM(ACE_dogtag,86);
    ACE_DOGTAG_ITEM(ACE_dogtag,87);
    ACE_DOGTAG_ITEM(ACE_dogtag,88);
    ACE_DOGTAG_ITEM(ACE_dogtag,89);
    ACE_DOGTAG_ITEM(ACE_dogtag,90);
    ACE_DOGTAG_ITEM(ACE_dogtag,91);
    ACE_DOGTAG_ITEM(ACE_dogtag,92);
    ACE_DOGTAG_ITEM(ACE_dogtag,93);
    ACE_DOGTAG_ITEM(ACE_dogtag,94);
    ACE_DOGTAG_ITEM(ACE_dogtag,95);
    ACE_DOGTAG_ITEM(ACE_dogtag,96);
    ACE_DOGTAG_ITEM(ACE_dogtag,97);
    ACE_DOGTAG_ITEM(ACE_dogtag,98);
    ACE_DOGTAG_ITEM(ACE_dogtag,99);
    ACE_DOGTAG_ITEM(ACE_dogtag,100);
    ACE_DOGTAG_ITEM(ACE_dogtag,101);
    ACE_DOGTAG_ITEM(ACE_dogtag,102);
    ACE_DOGTAG_ITEM(ACE_dogtag,103);
    ACE_DOGTAG_ITEM(ACE_dogtag,104);
    ACE_DOGTAG_ITEM(ACE_dogtag,105);
    ACE_DOGTAG_ITEM(ACE_dogtag,106);
    ACE_DOGTAG_ITEM(ACE_dogtag,107);
    ACE_DOGTAG_ITEM(ACE_dogtag,108);
    ACE_DOGTAG_ITEM(ACE_dogtag,109);
    ACE_DOGTAG_ITEM(ACE_dogtag,110);
    ACE_DOGTAG_ITEM(ACE_dogtag,111);
    ACE_DOGTAG_ITEM(ACE_dogtag,112);
    ACE_DOGTAG_ITEM(ACE_dogtag,113);
    ACE_DOGTAG_ITEM(ACE_dogtag,114);
    ACE_DOGTAG_ITEM(ACE_dogtag,115);
    ACE_DOGTAG_ITEM(ACE_dogtag,116);
    ACE_DOGTAG_ITEM(ACE_dogtag,117);
    ACE_DOGTAG_ITEM(ACE_dogtag,118);
    ACE_DOGTAG_ITEM(ACE_dogtag,119);
    ACE_DOGTAG_ITEM(ACE_dogtag,120);
    ACE_DOGTAG_ITEM(ACE_dogtag,121);
    ACE_DOGTAG_ITEM(ACE_dogtag,122);
    ACE_DOGTAG_ITEM(ACE_dogtag,123);
    ACE_DOGTAG_ITEM(ACE_dogtag,124);
    ACE_DOGTAG_ITEM(ACE_dogtag,125);
    ACE_DOGTAG_ITEM(ACE_dogtag,126);
    ACE_DOGTAG_ITEM(ACE_dogtag,127);
    ACE_DOGTAG_ITEM(ACE_dogtag,128);
    ACE_DOGTAG_ITEM(ACE_dogtag,129);
    ACE_DOGTAG_ITEM(ACE_dogtag,130);
    ACE_DOGTAG_ITEM(ACE_dogtag,131);
    ACE_DOGTAG_ITEM(ACE_dogtag,132);
    ACE_DOGTAG_ITEM(ACE_dogtag,133);
    ACE_DOGTAG_ITEM(ACE_dogtag,134);
    ACE_DOGTAG_ITEM(ACE_dogtag,135);
    ACE_DOGTAG_ITEM(ACE_dogtag,136);
    ACE_DOGTAG_ITEM(ACE_dogtag,137);
    ACE_DOGTAG_ITEM(ACE_dogtag,138);
    ACE_DOGTAG_ITEM(ACE_dogtag,139);
    ACE_DOGTAG_ITEM(ACE_dogtag,140);
    ACE_DOGTAG_ITEM(ACE_dogtag,141);
    ACE_DOGTAG_ITEM(ACE_dogtag,142);
    ACE_DOGTAG_ITEM(ACE_dogtag,143);
    ACE_DOGTAG_ITEM(ACE_dogtag,144);
    ACE_DOGTAG_ITEM(ACE_dogtag,145);
    ACE_DOGTAG_ITEM(ACE_dogtag,146);
    ACE_DOGTAG_ITEM(ACE_dogtag,147);
    ACE_DOGTAG_ITEM(ACE_dogtag,148);
    ACE_DOGTAG_ITEM(ACE_dogtag,149);
    ACE_DOGTAG_ITEM(ACE_dogtag,150);
    ACE_DOGTAG_ITEM(ACE_dogtag,151);
    ACE_DOGTAG_ITEM(ACE_dogtag,152);
    ACE_DOGTAG_ITEM(ACE_dogtag,153);
    ACE_DOGTAG_ITEM(ACE_dogtag,154);
    ACE_DOGTAG_ITEM(ACE_dogtag,155);
    ACE_DOGTAG_ITEM(ACE_dogtag,156);
    ACE_DOGTAG_ITEM(ACE_dogtag,157);
    ACE_DOGTAG_ITEM(ACE_dogtag,158);
    ACE_DOGTAG_ITEM(ACE_dogtag,159);
    ACE_DOGTAG_ITEM(ACE_dogtag,160);
    ACE_DOGTAG_ITEM(ACE_dogtag,161);
    ACE_DOGTAG_ITEM(ACE_dogtag,162);
    ACE_DOGTAG_ITEM(ACE_dogtag,163);
    ACE_DOGTAG_ITEM(ACE_dogtag,164);
    ACE_DOGTAG_ITEM(ACE_dogtag,165);
    ACE_DOGTAG_ITEM(ACE_dogtag,166);
    ACE_DOGTAG_ITEM(ACE_dogtag,167);
    ACE_DOGTAG_ITEM(ACE_dogtag,168);
    ACE_DOGTAG_ITEM(ACE_dogtag,169);
    ACE_DOGTAG_ITEM(ACE_dogtag,170);
    ACE_DOGTAG_ITEM(ACE_dogtag,171);
    ACE_DOGTAG_ITEM(ACE_dogtag,172);
    ACE_DOGTAG_ITEM(ACE_dogtag,173);
    ACE_DOGTAG_ITEM(ACE_dogtag,174);
    ACE_DOGTAG_ITEM(ACE_dogtag,175);
    ACE_DOGTAG_ITEM(ACE_dogtag,176);
    ACE_DOGTAG_ITEM(ACE_dogtag,177);
    ACE_DOGTAG_ITEM(ACE_dogtag,178);
    ACE_DOGTAG_ITEM(ACE_dogtag,179);
    ACE_DOGTAG_ITEM(ACE_dogtag,180);
    ACE_DOGTAG_ITEM(ACE_dogtag,181);
    ACE_DOGTAG_ITEM(ACE_dogtag,182);
    ACE_DOGTAG_ITEM(ACE_dogtag,183);
    ACE_DOGTAG_ITEM(ACE_dogtag,184);
    ACE_DOGTAG_ITEM(ACE_dogtag,185);
    ACE_DOGTAG_ITEM(ACE_dogtag,186);
    ACE_DOGTAG_ITEM(ACE_dogtag,187);
    ACE_DOGTAG_ITEM(ACE_dogtag,188);
    ACE_DOGTAG_ITEM(ACE_dogtag,189);
    ACE_DOGTAG_ITEM(ACE_dogtag,190);
    ACE_DOGTAG_ITEM(ACE_dogtag,191);
    ACE_DOGTAG_ITEM(ACE_dogtag,192);
    ACE_DOGTAG_ITEM(ACE_dogtag,193);
    ACE_DOGTAG_ITEM(ACE_dogtag,194);
    ACE_DOGTAG_ITEM(ACE_dogtag,195);
    ACE_DOGTAG_ITEM(ACE_dogtag,196);
    ACE_DOGTAG_ITEM(ACE_dogtag,197);
    ACE_DOGTAG_ITEM(ACE_dogtag,198);
    ACE_DOGTAG_ITEM(ACE_dogtag,199);
    ACE_DOGTAG_ITEM(ACE_dogtag,200);
    ACE_DOGTAG_ITEM(ACE_dogtag,201);
    ACE_DOGTAG_ITEM(ACE_dogtag,202);
    ACE_DOGTAG_ITEM(ACE_dogtag,203);
    ACE_DOGTAG_ITEM(ACE_dogtag,204);
    ACE_DOGTAG_ITEM(ACE_dogtag,205);
    ACE_DOGTAG_ITEM(ACE_dogtag,206);
    ACE_DOGTAG_ITEM(ACE_dogtag,207);
    ACE_DOGTAG_ITEM(ACE_dogtag,208);
    ACE_DOGTAG_ITEM(ACE_dogtag,209);
    ACE_DOGTAG_ITEM(ACE_dogtag,210);
    ACE_DOGTAG_ITEM(ACE_dogtag,211);
    ACE_DOGTAG_ITEM(ACE_dogtag,212);
    ACE_DOGTAG_ITEM(ACE_dogtag,213);
    ACE_DOGTAG_ITEM(ACE_dogtag,214);
    ACE_DOGTAG_ITEM(ACE_dogtag,215);
    ACE_DOGTAG_ITEM(ACE_dogtag,216);
    ACE_DOGTAG_ITEM(ACE_dogtag,217);
    ACE_DOGTAG_ITEM(ACE_dogtag,218);
    ACE_DOGTAG_ITEM(ACE_dogtag,219);
    ACE_DOGTAG_ITEM(ACE_dogtag,220);
    ACE_DOGTAG_ITEM(ACE_dogtag,221);
    ACE_DOGTAG_ITEM(ACE_dogtag,222);
    ACE_DOGTAG_ITEM(ACE_dogtag,223);
    ACE_DOGTAG_ITEM(ACE_dogtag,224);
    ACE_DOGTAG_ITEM(ACE_dogtag,225);
    ACE_DOGTAG_ITEM(ACE_dogtag,226);
    ACE_DOGTAG_ITEM(ACE_dogtag,227);
    ACE_DOGTAG_ITEM(ACE_dogtag,228);
    ACE_DOGTAG_ITEM(ACE_dogtag,229);
    ACE_DOGTAG_ITEM(ACE_dogtag,230);
    ACE_DOGTAG_ITEM(ACE_dogtag,231);
    ACE_DOGTAG_ITEM(ACE_dogtag,232);
    ACE_DOGTAG_ITEM(ACE_dogtag,233);
    ACE_DOGTAG_ITEM(ACE_dogtag,234);
    ACE_DOGTAG_ITEM(ACE_dogtag,235);
    ACE_DOGTAG_ITEM(ACE_dogtag,236);
    ACE_DOGTAG_ITEM(ACE_dogtag,237);
    ACE_DOGTAG_ITEM(ACE_dogtag,238);
    ACE_DOGTAG_ITEM(ACE_dogtag,239);
    ACE_DOGTAG_ITEM(ACE_dogtag,240);
    ACE_DOGTAG_ITEM(ACE_dogtag,241);
    ACE_DOGTAG_ITEM(ACE_dogtag,242);
    ACE_DOGTAG_ITEM(ACE_dogtag,243);
    ACE_DOGTAG_ITEM(ACE_dogtag,244);
    ACE_DOGTAG_ITEM(ACE_dogtag,245);
    ACE_DOGTAG_ITEM(ACE_dogtag,246);
    ACE_DOGTAG_ITEM(ACE_dogtag,247);
    ACE_DOGTAG_ITEM(ACE_dogtag,248);
    ACE_DOGTAG_ITEM(ACE_dogtag,249);
    ACE_DOGTAG_ITEM(ACE_dogtag,250);
    ACE_DOGTAG_ITEM(ACE_dogtag,251);
    ACE_DOGTAG_ITEM(ACE_dogtag,252);
    ACE_DOGTAG_ITEM(ACE_dogtag,253);
    ACE_DOGTAG_ITEM(ACE_dogtag,254);
    ACE_DOGTAG_ITEM(ACE_dogtag,255);
    ACE_DOGTAG_ITEM(ACE_dogtag,256);
    ACE_DOGTAG_ITEM(ACE_dogtag,257);
    ACE_DOGTAG_ITEM(ACE_dogtag,258);
    ACE_DOGTAG_ITEM(ACE_dogtag,259);
    ACE_DOGTAG_ITEM(ACE_dogtag,260);
    ACE_DOGTAG_ITEM(ACE_dogtag,261);
    ACE_DOGTAG_ITEM(ACE_dogtag,262);
    ACE_DOGTAG_ITEM(ACE_dogtag,263);
    ACE_DOGTAG_ITEM(ACE_dogtag,264);
    ACE_DOGTAG_ITEM(ACE_dogtag,265);
    ACE_DOGTAG_ITEM(ACE_dogtag,266);
    ACE_DOGTAG_ITEM(ACE_dogtag,267);
    ACE_DOGTAG_ITEM(ACE_dogtag,268);
    ACE_DOGTAG_ITEM(ACE_dogtag,269);
    ACE_DOGTAG_ITEM(ACE_dogtag,270);
    ACE_DOGTAG_ITEM(ACE_dogtag,271);
    ACE_DOGTAG_ITEM(ACE_dogtag,272);
    ACE_DOGTAG_ITEM(ACE_dogtag,273);
    ACE_DOGTAG_ITEM(ACE_dogtag,274);
    ACE_DOGTAG_ITEM(ACE_dogtag,275);
    ACE_DOGTAG_ITEM(ACE_dogtag,276);
    ACE_DOGTAG_ITEM(ACE_dogtag,277);
    ACE_DOGTAG_ITEM(ACE_dogtag,278);
    ACE_DOGTAG_ITEM(ACE_dogtag,279);
    ACE_DOGTAG_ITEM(ACE_dogtag,280);
    ACE_DOGTAG_ITEM(ACE_dogtag,281);
    ACE_DOGTAG_ITEM(ACE_dogtag,282);
    ACE_DOGTAG_ITEM(ACE_dogtag,283);
    ACE_DOGTAG_ITEM(ACE_dogtag,284);
    ACE_DOGTAG_ITEM(ACE_dogtag,285);
    ACE_DOGTAG_ITEM(ACE_dogtag,286);
    ACE_DOGTAG_ITEM(ACE_dogtag,287);
    ACE_DOGTAG_ITEM(ACE_dogtag,288);
    ACE_DOGTAG_ITEM(ACE_dogtag,289);
    ACE_DOGTAG_ITEM(ACE_dogtag,290);
    ACE_DOGTAG_ITEM(ACE_dogtag,291);
    ACE_DOGTAG_ITEM(ACE_dogtag,292);
    ACE_DOGTAG_ITEM(ACE_dogtag,293);
    ACE_DOGTAG_ITEM(ACE_dogtag,294);
    ACE_DOGTAG_ITEM(ACE_dogtag,295);
    ACE_DOGTAG_ITEM(ACE_dogtag,296);
    ACE_DOGTAG_ITEM(ACE_dogtag,297);
    ACE_DOGTAG_ITEM(ACE_dogtag,298);
    ACE_DOGTAG_ITEM(ACE_dogtag,299);
    ACE_DOGTAG_ITEM(ACE_dogtag,300);
    ACE_DOGTAG_ITEM(ACE_dogtag,301);
    ACE_DOGTAG_ITEM(ACE_dogtag,302);
    ACE_DOGTAG_ITEM(ACE_dogtag,303);
    ACE_DOGTAG_ITEM(ACE_dogtag,304);
    ACE_DOGTAG_ITEM(ACE_dogtag,305);
    ACE_DOGTAG_ITEM(ACE_dogtag,306);
    ACE_DOGTAG_ITEM(ACE_dogtag,307);
    ACE_DOGTAG_ITEM(ACE_dogtag,308);
    ACE_DOGTAG_ITEM(ACE_dogtag,309);
    ACE_DOGTAG_ITEM(ACE_dogtag,310);
    ACE_DOGTAG_ITEM(ACE_dogtag,311);
    ACE_DOGTAG_ITEM(ACE_dogtag,312);
    ACE_DOGTAG_ITEM(ACE_dogtag,313);
    ACE_DOGTAG_ITEM(ACE_dogtag,314);
    ACE_DOGTAG_ITEM(ACE_dogtag,315);
    ACE_DOGTAG_ITEM(ACE_dogtag,316);
    ACE_DOGTAG_ITEM(ACE_dogtag,317);
    ACE_DOGTAG_ITEM(ACE_dogtag,318);
    ACE_DOGTAG_ITEM(ACE_dogtag,319);
    ACE_DOGTAG_ITEM(ACE_dogtag,320);
    ACE_DOGTAG_ITEM(ACE_dogtag,321);
    ACE_DOGTAG_ITEM(ACE_dogtag,322);
    ACE_DOGTAG_ITEM(ACE_dogtag,323);
    ACE_DOGTAG_ITEM(ACE_dogtag,324);
    ACE_DOGTAG_ITEM(ACE_dogtag,325);
    ACE_DOGTAG_ITEM(ACE_dogtag,326);
    ACE_DOGTAG_ITEM(ACE_dogtag,327);
    ACE_DOGTAG_ITEM(ACE_dogtag,328);
    ACE_DOGTAG_ITEM(ACE_dogtag,329);
    ACE_DOGTAG_ITEM(ACE_dogtag,330);
    ACE_DOGTAG_ITEM(ACE_dogtag,331);
    ACE_DOGTAG_ITEM(ACE_dogtag,332);
    ACE_DOGTAG_ITEM(ACE_dogtag,333);
    ACE_DOGTAG_ITEM(ACE_dogtag,334);
    ACE_DOGTAG_ITEM(ACE_dogtag,335);
    ACE_DOGTAG_ITEM(ACE_dogtag,336);
    ACE_DOGTAG_ITEM(ACE_dogtag,337);
    ACE_DOGTAG_ITEM(ACE_dogtag,338);
    ACE_DOGTAG_ITEM(ACE_dogtag,339);
    ACE_DOGTAG_ITEM(ACE_dogtag,340);
    ACE_DOGTAG_ITEM(ACE_dogtag,341);
    ACE_DOGTAG_ITEM(ACE_dogtag,342);
    ACE_DOGTAG_ITEM(ACE_dogtag,343);
    ACE_DOGTAG_ITEM(ACE_dogtag,344);
    ACE_DOGTAG_ITEM(ACE_dogtag,345);
    ACE_DOGTAG_ITEM(ACE_dogtag,346);
    ACE_DOGTAG_ITEM(ACE_dogtag,347);
    ACE_DOGTAG_ITEM(ACE_dogtag,348);
    ACE_DOGTAG_ITEM(ACE_dogtag,349);
    ACE_DOGTAG_ITEM(ACE_dogtag,350);
    ACE_DOGTAG_ITEM(ACE_dogtag,351);
    ACE_DOGTAG_ITEM(ACE_dogtag,352);
    ACE_DOGTAG_ITEM(ACE_dogtag,353);
    ACE_DOGTAG_ITEM(ACE_dogtag,354);
    ACE_DOGTAG_ITEM(ACE_dogtag,355);
    ACE_DOGTAG_ITEM(ACE_dogtag,356);
    ACE_DOGTAG_ITEM(ACE_dogtag,357);
    ACE_DOGTAG_ITEM(ACE_dogtag,358);
    ACE_DOGTAG_ITEM(ACE_dogtag,359);
    ACE_DOGTAG_ITEM(ACE_dogtag,360);
    ACE_DOGTAG_ITEM(ACE_dogtag,361);
    ACE_DOGTAG_ITEM(ACE_dogtag,362);
    ACE_DOGTAG_ITEM(ACE_dogtag,363);
    ACE_DOGTAG_ITEM(ACE_dogtag,364);
    ACE_DOGTAG_ITEM(ACE_dogtag,365);
    ACE_DOGTAG_ITEM(ACE_dogtag,366);
    ACE_DOGTAG_ITEM(ACE_dogtag,367);
    ACE_DOGTAG_ITEM(ACE_dogtag,368);
    ACE_DOGTAG_ITEM(ACE_dogtag,369);
    ACE_DOGTAG_ITEM(ACE_dogtag,370);
    ACE_DOGTAG_ITEM(ACE_dogtag,371);
    ACE_DOGTAG_ITEM(ACE_dogtag,372);
    ACE_DOGTAG_ITEM(ACE_dogtag,373);
    ACE_DOGTAG_ITEM(ACE_dogtag,374);
    ACE_DOGTAG_ITEM(ACE_dogtag,375);
    ACE_DOGTAG_ITEM(ACE_dogtag,376);
    ACE_DOGTAG_ITEM(ACE_dogtag,377);
    ACE_DOGTAG_ITEM(ACE_dogtag,378);
    ACE_DOGTAG_ITEM(ACE_dogtag,379);
    ACE_DOGTAG_ITEM(ACE_dogtag,380);
    ACE_DOGTAG_ITEM(ACE_dogtag,381);
    ACE_DOGTAG_ITEM(ACE_dogtag,382);
    ACE_DOGTAG_ITEM(ACE_dogtag,383);
    ACE_DOGTAG_ITEM(ACE_dogtag,384);
    ACE_DOGTAG_ITEM(ACE_dogtag,385);
    ACE_DOGTAG_ITEM(ACE_dogtag,386);
    ACE_DOGTAG_ITEM(ACE_dogtag,387);
    ACE_DOGTAG_ITEM(ACE_dogtag,388);
    ACE_DOGTAG_ITEM(ACE_dogtag,389);
    ACE_DOGTAG_ITEM(ACE_dogtag,390);
    ACE_DOGTAG_ITEM(ACE_dogtag,391);
    ACE_DOGTAG_ITEM(ACE_dogtag,392);
    ACE_DOGTAG_ITEM(ACE_dogtag,393);
    ACE_DOGTAG_ITEM(ACE_dogtag,394);
    ACE_DOGTAG_ITEM(ACE_dogtag,395);
    ACE_DOGTAG_ITEM(ACE_dogtag,396);
    ACE_DOGTAG_ITEM(ACE_dogtag,397);
    ACE_DOGTAG_ITEM(ACE_dogtag,398);
    ACE_DOGTAG_ITEM(ACE_dogtag,399);
    ACE_DOGTAG_ITEM(ACE_dogtag,400);
    ACE_DOGTAG_ITEM(ACE_dogtag,401);
    ACE_DOGTAG_ITEM(ACE_dogtag,402);
    ACE_DOGTAG_ITEM(ACE_dogtag,403);
    ACE_DOGTAG_ITEM(ACE_dogtag,404);
    ACE_DOGTAG_ITEM(ACE_dogtag,405);
    ACE_DOGTAG_ITEM(ACE_dogtag,406);
    ACE_DOGTAG_ITEM(ACE_dogtag,407);
    ACE_DOGTAG_ITEM(ACE_dogtag,408);
    ACE_DOGTAG_ITEM(ACE_dogtag,409);
    ACE_DOGTAG_ITEM(ACE_dogtag,410);
    ACE_DOGTAG_ITEM(ACE_dogtag,411);
    ACE_DOGTAG_ITEM(ACE_dogtag,412);
    ACE_DOGTAG_ITEM(ACE_dogtag,413);
    ACE_DOGTAG_ITEM(ACE_dogtag,414);
    ACE_DOGTAG_ITEM(ACE_dogtag,415);
    ACE_DOGTAG_ITEM(ACE_dogtag,416);
    ACE_DOGTAG_ITEM(ACE_dogtag,417);
    ACE_DOGTAG_ITEM(ACE_dogtag,418);
    ACE_DOGTAG_ITEM(ACE_dogtag,419);
    ACE_DOGTAG_ITEM(ACE_dogtag,420);
    ACE_DOGTAG_ITEM(ACE_dogtag,421);
    ACE_DOGTAG_ITEM(ACE_dogtag,422);
    ACE_DOGTAG_ITEM(ACE_dogtag,423);
    ACE_DOGTAG_ITEM(ACE_dogtag,424);
    ACE_DOGTAG_ITEM(ACE_dogtag,425);
    ACE_DOGTAG_ITEM(ACE_dogtag,426);
    ACE_DOGTAG_ITEM(ACE_dogtag,427);
    ACE_DOGTAG_ITEM(ACE_dogtag,428);
    ACE_DOGTAG_ITEM(ACE_dogtag,429);
    ACE_DOGTAG_ITEM(ACE_dogtag,430);
    ACE_DOGTAG_ITEM(ACE_dogtag,431);
    ACE_DOGTAG_ITEM(ACE_dogtag,432);
    ACE_DOGTAG_ITEM(ACE_dogtag,433);
    ACE_DOGTAG_ITEM(ACE_dogtag,434);
    ACE_DOGTAG_ITEM(ACE_dogtag,435);
    ACE_DOGTAG_ITEM(ACE_dogtag,436);
    ACE_DOGTAG_ITEM(ACE_dogtag,437);
    ACE_DOGTAG_ITEM(ACE_dogtag,438);
    ACE_DOGTAG_ITEM(ACE_dogtag,439);
    ACE_DOGTAG_ITEM(ACE_dogtag,440);
    ACE_DOGTAG_ITEM(ACE_dogtag,441);
    ACE_DOGTAG_ITEM(ACE_dogtag,442);
    ACE_DOGTAG_ITEM(ACE_dogtag,443);
    ACE_DOGTAG_ITEM(ACE_dogtag,444);
    ACE_DOGTAG_ITEM(ACE_dogtag,445);
    ACE_DOGTAG_ITEM(ACE_dogtag,446);
    ACE_DOGTAG_ITEM(ACE_dogtag,447);
    ACE_DOGTAG_ITEM(ACE_dogtag,448);
    ACE_DOGTAG_ITEM(ACE_dogtag,449);
    ACE_DOGTAG_ITEM(ACE_dogtag,450);
    ACE_DOGTAG_ITEM(ACE_dogtag,451);
    ACE_DOGTAG_ITEM(ACE_dogtag,452);
    ACE_DOGTAG_ITEM(ACE_dogtag,453);
    ACE_DOGTAG_ITEM(ACE_dogtag,454);
    ACE_DOGTAG_ITEM(ACE_dogtag,455);
    ACE_DOGTAG_ITEM(ACE_dogtag,456);
    ACE_DOGTAG_ITEM(ACE_dogtag,457);
    ACE_DOGTAG_ITEM(ACE_dogtag,458);
    ACE_DOGTAG_ITEM(ACE_dogtag,459);
    ACE_DOGTAG_ITEM(ACE_dogtag,460);
    ACE_DOGTAG_ITEM(ACE_dogtag,461);
    ACE_DOGTAG_ITEM(ACE_dogtag,462);
    ACE_DOGTAG_ITEM(ACE_dogtag,463);
    ACE_DOGTAG_ITEM(ACE_dogtag,464);
    ACE_DOGTAG_ITEM(ACE_dogtag,465);
    ACE_DOGTAG_ITEM(ACE_dogtag,466);
    ACE_DOGTAG_ITEM(ACE_dogtag,467);
    ACE_DOGTAG_ITEM(ACE_dogtag,468);
    ACE_DOGTAG_ITEM(ACE_dogtag,469);
    ACE_DOGTAG_ITEM(ACE_dogtag,470);
    ACE_DOGTAG_ITEM(ACE_dogtag,471);
    ACE_DOGTAG_ITEM(ACE_dogtag,472);
    ACE_DOGTAG_ITEM(ACE_dogtag,473);
    ACE_DOGTAG_ITEM(ACE_dogtag,474);
    ACE_DOGTAG_ITEM(ACE_dogtag,475);
    ACE_DOGTAG_ITEM(ACE_dogtag,476);
    ACE_DOGTAG_ITEM(ACE_dogtag,477);
    ACE_DOGTAG_ITEM(ACE_dogtag,478);
    ACE_DOGTAG_ITEM(ACE_dogtag,479);
    ACE_DOGTAG_ITEM(ACE_dogtag,480);
    ACE_DOGTAG_ITEM(ACE_dogtag,481);
    ACE_DOGTAG_ITEM(ACE_dogtag,482);
    ACE_DOGTAG_ITEM(ACE_dogtag,483);
    ACE_DOGTAG_ITEM(ACE_dogtag,484);
    ACE_DOGTAG_ITEM(ACE_dogtag,485);
    ACE_DOGTAG_ITEM(ACE_dogtag,486);
    ACE_DOGTAG_ITEM(ACE_dogtag,487);
    ACE_DOGTAG_ITEM(ACE_dogtag,488);
    ACE_DOGTAG_ITEM(ACE_dogtag,489);
    ACE_DOGTAG_ITEM(ACE_dogtag,490);
    ACE_DOGTAG_ITEM(ACE_dogtag,491);
    ACE_DOGTAG_ITEM(ACE_dogtag,492);
    ACE_DOGTAG_ITEM(ACE_dogtag,493);
    ACE_DOGTAG_ITEM(ACE_dogtag,494);
    ACE_DOGTAG_ITEM(ACE_dogtag,495);
    ACE_DOGTAG_ITEM(ACE_dogtag,496);
    ACE_DOGTAG_ITEM(ACE_dogtag,497);
    ACE_DOGTAG_ITEM(ACE_dogtag,498);
    ACE_DOGTAG_ITEM(ACE_dogtag,499);
    ACE_DOGTAG_ITEM(ACE_dogtag,500);
    ACE_DOGTAG_ITEM(ACE_dogtag,501);
    ACE_DOGTAG_ITEM(ACE_dogtag,502);
    ACE_DOGTAG_ITEM(ACE_dogtag,503);
    ACE_DOGTAG_ITEM(ACE_dogtag,504);
    ACE_DOGTAG_ITEM(ACE_dogtag,505);
    ACE_DOGTAG_ITEM(ACE_dogtag,506);
    ACE_DOGTAG_ITEM(ACE_dogtag,507);
    ACE_DOGTAG_ITEM(ACE_dogtag,508);
    ACE_DOGTAG_ITEM(ACE_dogtag,509);
    ACE_DOGTAG_ITEM(ACE_dogtag,510);
    ACE_DOGTAG_ITEM(ACE_dogtag,511);
    ACE_DOGTAG_ITEM(ACE_dogtag,512);
    ACE_DOGTAG_ITEM(ACE_dogtag,513);
    ACE_DOGTAG_ITEM(ACE_dogtag,514);
    ACE_DOGTAG_ITEM(ACE_dogtag,515);
    ACE_DOGTAG_ITEM(ACE_dogtag,516);
    ACE_DOGTAG_ITEM(ACE_dogtag,517);
    ACE_DOGTAG_ITEM(ACE_dogtag,518);
    ACE_DOGTAG_ITEM(ACE_dogtag,519);
    ACE_DOGTAG_ITEM(ACE_dogtag,520);
    ACE_DOGTAG_ITEM(ACE_dogtag,521);
    ACE_DOGTAG_ITEM(ACE_dogtag,522);
    ACE_DOGTAG_ITEM(ACE_dogtag,523);
    ACE_DOGTAG_ITEM(ACE_dogtag,524);
    ACE_DOGTAG_ITEM(ACE_dogtag,525);
    ACE_DOGTAG_ITEM(ACE_dogtag,526);
    ACE_DOGTAG_ITEM(ACE_dogtag,527);
    ACE_DOGTAG_ITEM(ACE_dogtag,528);
    ACE_DOGTAG_ITEM(ACE_dogtag,529);
    ACE_DOGTAG_ITEM(ACE_dogtag,530);
    ACE_DOGTAG_ITEM(ACE_dogtag,531);
    ACE_DOGTAG_ITEM(ACE_dogtag,532);
    ACE_DOGTAG_ITEM(ACE_dogtag,533);
    ACE_DOGTAG_ITEM(ACE_dogtag,534);
    ACE_DOGTAG_ITEM(ACE_dogtag,535);
    ACE_DOGTAG_ITEM(ACE_dogtag,536);
    ACE_DOGTAG_ITEM(ACE_dogtag,537);
    ACE_DOGTAG_ITEM(ACE_dogtag,538);
    ACE_DOGTAG_ITEM(ACE_dogtag,539);
    ACE_DOGTAG_ITEM(ACE_dogtag,540);
    ACE_DOGTAG_ITEM(ACE_dogtag,541);
    ACE_DOGTAG_ITEM(ACE_dogtag,542);
    ACE_DOGTAG_ITEM(ACE_dogtag,543);
    ACE_DOGTAG_ITEM(ACE_dogtag,544);
    ACE_DOGTAG_ITEM(ACE_dogtag,545);
    ACE_DOGTAG_ITEM(ACE_dogtag,546);
    ACE_DOGTAG_ITEM(ACE_dogtag,547);
    ACE_DOGTAG_ITEM(ACE_dogtag,548);
    ACE_DOGTAG_ITEM(ACE_dogtag,549);
    ACE_DOGTAG_ITEM(ACE_dogtag,550);
    ACE_DOGTAG_ITEM(ACE_dogtag,551);
    ACE_DOGTAG_ITEM(ACE_dogtag,552);
    ACE_DOGTAG_ITEM(ACE_dogtag,553);
    ACE_DOGTAG_ITEM(ACE_dogtag,554);
    ACE_DOGTAG_ITEM(ACE_dogtag,555);
    ACE_DOGTAG_ITEM(ACE_dogtag,556);
    ACE_DOGTAG_ITEM(ACE_dogtag,557);
    ACE_DOGTAG_ITEM(ACE_dogtag,558);
    ACE_DOGTAG_ITEM(ACE_dogtag,559);
    ACE_DOGTAG_ITEM(ACE_dogtag,560);
    ACE_DOGTAG_ITEM(ACE_dogtag,561);
    ACE_DOGTAG_ITEM(ACE_dogtag,562);
    ACE_DOGTAG_ITEM(ACE_dogtag,563);
    ACE_DOGTAG_ITEM(ACE_dogtag,564);
    ACE_DOGTAG_ITEM(ACE_dogtag,565);
    ACE_DOGTAG_ITEM(ACE_dogtag,566);
    ACE_DOGTAG_ITEM(ACE_dogtag,567);
    ACE_DOGTAG_ITEM(ACE_dogtag,568);
    ACE_DOGTAG_ITEM(ACE_dogtag,569);
    ACE_DOGTAG_ITEM(ACE_dogtag,570);
    ACE_DOGTAG_ITEM(ACE_dogtag,571);
    ACE_DOGTAG_ITEM(ACE_dogtag,572);
    ACE_DOGTAG_ITEM(ACE_dogtag,573);
    ACE_DOGTAG_ITEM(ACE_dogtag,574);
    ACE_DOGTAG_ITEM(ACE_dogtag,575);
    ACE_DOGTAG_ITEM(ACE_dogtag,576);
    ACE_DOGTAG_ITEM(ACE_dogtag,577);
    ACE_DOGTAG_ITEM(ACE_dogtag,578);
    ACE_DOGTAG_ITEM(ACE_dogtag,579);
    ACE_DOGTAG_ITEM(ACE_dogtag,580);
    ACE_DOGTAG_ITEM(ACE_dogtag,581);
    ACE_DOGTAG_ITEM(ACE_dogtag,582);
    ACE_DOGTAG_ITEM(ACE_dogtag,583);
    ACE_DOGTAG_ITEM(ACE_dogtag,584);
    ACE_DOGTAG_ITEM(ACE_dogtag,585);
    ACE_DOGTAG_ITEM(ACE_dogtag,586);
    ACE_DOGTAG_ITEM(ACE_dogtag,587);
    ACE_DOGTAG_ITEM(ACE_dogtag,588);
    ACE_DOGTAG_ITEM(ACE_dogtag,589);
    ACE_DOGTAG_ITEM(ACE_dogtag,590);
    ACE_DOGTAG_ITEM(ACE_dogtag,591);
    ACE_DOGTAG_ITEM(ACE_dogtag,592);
    ACE_DOGTAG_ITEM(ACE_dogtag,593);
    ACE_DOGTAG_ITEM(ACE_dogtag,594);
    ACE_DOGTAG_ITEM(ACE_dogtag,595);
    ACE_DOGTAG_ITEM(ACE_dogtag,596);
    ACE_DOGTAG_ITEM(ACE_dogtag,597);
    ACE_DOGTAG_ITEM(ACE_dogtag,598);
    ACE_DOGTAG_ITEM(ACE_dogtag,599);
    ACE_DOGTAG_ITEM(ACE_dogtag,600);
    ACE_DOGTAG_ITEM(ACE_dogtag,601);
    ACE_DOGTAG_ITEM(ACE_dogtag,602);
    ACE_DOGTAG_ITEM(ACE_dogtag,603);
    ACE_DOGTAG_ITEM(ACE_dogtag,604);
    ACE_DOGTAG_ITEM(ACE_dogtag,605);
    ACE_DOGTAG_ITEM(ACE_dogtag,606);
    ACE_DOGTAG_ITEM(ACE_dogtag,607);
    ACE_DOGTAG_ITEM(ACE_dogtag,608);
    ACE_DOGTAG_ITEM(ACE_dogtag,609);
    ACE_DOGTAG_ITEM(ACE_dogtag,610);
    ACE_DOGTAG_ITEM(ACE_dogtag,611);
    ACE_DOGTAG_ITEM(ACE_dogtag,612);
    ACE_DOGTAG_ITEM(ACE_dogtag,613);
    ACE_DOGTAG_ITEM(ACE_dogtag,614);
    ACE_DOGTAG_ITEM(ACE_dogtag,615);
    ACE_DOGTAG_ITEM(ACE_dogtag,616);
    ACE_DOGTAG_ITEM(ACE_dogtag,617);
    ACE_DOGTAG_ITEM(ACE_dogtag,618);
    ACE_DOGTAG_ITEM(ACE_dogtag,619);
    ACE_DOGTAG_ITEM(ACE_dogtag,620);
    ACE_DOGTAG_ITEM(ACE_dogtag,621);
    ACE_DOGTAG_ITEM(ACE_dogtag,622);
    ACE_DOGTAG_ITEM(ACE_dogtag,623);
    ACE_DOGTAG_ITEM(ACE_dogtag,624);
    ACE_DOGTAG_ITEM(ACE_dogtag,625);
    ACE_DOGTAG_ITEM(ACE_dogtag,626);
    ACE_DOGTAG_ITEM(ACE_dogtag,627);
    ACE_DOGTAG_ITEM(ACE_dogtag,628);
    ACE_DOGTAG_ITEM(ACE_dogtag,629);
    ACE_DOGTAG_ITEM(ACE_dogtag,630);
    ACE_DOGTAG_ITEM(ACE_dogtag,631);
    ACE_DOGTAG_ITEM(ACE_dogtag,632);
    ACE_DOGTAG_ITEM(ACE_dogtag,633);
    ACE_DOGTAG_ITEM(ACE_dogtag,634);
    ACE_DOGTAG_ITEM(ACE_dogtag,635);
    ACE_DOGTAG_ITEM(ACE_dogtag,636);
    ACE_DOGTAG_ITEM(ACE_dogtag,637);
    ACE_DOGTAG_ITEM(ACE_dogtag,638);
    ACE_DOGTAG_ITEM(ACE_dogtag,639);
    ACE_DOGTAG_ITEM(ACE_dogtag,640);
    ACE_DOGTAG_ITEM(ACE_dogtag,641);
    ACE_DOGTAG_ITEM(ACE_dogtag,642);
    ACE_DOGTAG_ITEM(ACE_dogtag,643);
    ACE_DOGTAG_ITEM(ACE_dogtag,644);
    ACE_DOGTAG_ITEM(ACE_dogtag,645);
    ACE_DOGTAG_ITEM(ACE_dogtag,646);
    ACE_DOGTAG_ITEM(ACE_dogtag,647);
    ACE_DOGTAG_ITEM(ACE_dogtag,648);
    ACE_DOGTAG_ITEM(ACE_dogtag,649);
    ACE_DOGTAG_ITEM(ACE_dogtag,650);
    ACE_DOGTAG_ITEM(ACE_dogtag,651);
    ACE_DOGTAG_ITEM(ACE_dogtag,652);
    ACE_DOGTAG_ITEM(ACE_dogtag,653);
    ACE_DOGTAG_ITEM(ACE_dogtag,654);
    ACE_DOGTAG_ITEM(ACE_dogtag,655);
    ACE_DOGTAG_ITEM(ACE_dogtag,656);
    ACE_DOGTAG_ITEM(ACE_dogtag,657);
    ACE_DOGTAG_ITEM(ACE_dogtag,658);
    ACE_DOGTAG_ITEM(ACE_dogtag,659);
    ACE_DOGTAG_ITEM(ACE_dogtag,660);
    ACE_DOGTAG_ITEM(ACE_dogtag,661);
    ACE_DOGTAG_ITEM(ACE_dogtag,662);
    ACE_DOGTAG_ITEM(ACE_dogtag,663);
    ACE_DOGTAG_ITEM(ACE_dogtag,664);
    ACE_DOGTAG_ITEM(ACE_dogtag,665);
    ACE_DOGTAG_ITEM(ACE_dogtag,666);
    ACE_DOGTAG_ITEM(ACE_dogtag,667);
    ACE_DOGTAG_ITEM(ACE_dogtag,668);
    ACE_DOGTAG_ITEM(ACE_dogtag,669);
    ACE_DOGTAG_ITEM(ACE_dogtag,670);
    ACE_DOGTAG_ITEM(ACE_dogtag,671);
    ACE_DOGTAG_ITEM(ACE_dogtag,672);
    ACE_DOGTAG_ITEM(ACE_dogtag,673);
    ACE_DOGTAG_ITEM(ACE_dogtag,674);
    ACE_DOGTAG_ITEM(ACE_dogtag,675);
    ACE_DOGTAG_ITEM(ACE_dogtag,676);
    ACE_DOGTAG_ITEM(ACE_dogtag,677);
    ACE_DOGTAG_ITEM(ACE_dogtag,678);
    ACE_DOGTAG_ITEM(ACE_dogtag,679);
    ACE_DOGTAG_ITEM(ACE_dogtag,680);
    ACE_DOGTAG_ITEM(ACE_dogtag,681);
    ACE_DOGTAG_ITEM(ACE_dogtag,682);
    ACE_DOGTAG_ITEM(ACE_dogtag,683);
    ACE_DOGTAG_ITEM(ACE_dogtag,684);
    ACE_DOGTAG_ITEM(ACE_dogtag,685);
    ACE_DOGTAG_ITEM(ACE_dogtag,686);
    ACE_DOGTAG_ITEM(ACE_dogtag,687);
    ACE_DOGTAG_ITEM(ACE_dogtag,688);
    ACE_DOGTAG_ITEM(ACE_dogtag,689);
    ACE_DOGTAG_ITEM(ACE_dogtag,690);
    ACE_DOGTAG_ITEM(ACE_dogtag,691);
    ACE_DOGTAG_ITEM(ACE_dogtag,692);
    ACE_DOGTAG_ITEM(ACE_dogtag,693);
    ACE_DOGTAG_ITEM(ACE_dogtag,694);
    ACE_DOGTAG_ITEM(ACE_dogtag,695);
    ACE_DOGTAG_ITEM(ACE_dogtag,696);
    ACE_DOGTAG_ITEM(ACE_dogtag,697);
    ACE_DOGTAG_ITEM(ACE_dogtag,698);
    ACE_DOGTAG_ITEM(ACE_dogtag,699);
    ACE_DOGTAG_ITEM(ACE_dogtag,700);
    ACE_DOGTAG_ITEM(ACE_dogtag,701);
    ACE_DOGTAG_ITEM(ACE_dogtag,702);
    ACE_DOGTAG_ITEM(ACE_dogtag,703);
    ACE_DOGTAG_ITEM(ACE_dogtag,704);
    ACE_DOGTAG_ITEM(ACE_dogtag,705);
    ACE_DOGTAG_ITEM(ACE_dogtag,706);
    ACE_DOGTAG_ITEM(ACE_dogtag,707);
    ACE_DOGTAG_ITEM(ACE_dogtag,708);
    ACE_DOGTAG_ITEM(ACE_dogtag,709);
    ACE_DOGTAG_ITEM(ACE_dogtag,710);
    ACE_DOGTAG_ITEM(ACE_dogtag,711);
    ACE_DOGTAG_ITEM(ACE_dogtag,712);
    ACE_DOGTAG_ITEM(ACE_dogtag,713);
    ACE_DOGTAG_ITEM(ACE_dogtag,714);
    ACE_DOGTAG_ITEM(ACE_dogtag,715);
    ACE_DOGTAG_ITEM(ACE_dogtag,716);
    ACE_DOGTAG_ITEM(ACE_dogtag,717);
    ACE_DOGTAG_ITEM(ACE_dogtag,718);
    ACE_DOGTAG_ITEM(ACE_dogtag,719);
    ACE_DOGTAG_ITEM(ACE_dogtag,720);
    ACE_DOGTAG_ITEM(ACE_dogtag,721);
    ACE_DOGTAG_ITEM(ACE_dogtag,722);
    ACE_DOGTAG_ITEM(ACE_dogtag,723);
    ACE_DOGTAG_ITEM(ACE_dogtag,724);
    ACE_DOGTAG_ITEM(ACE_dogtag,725);
    ACE_DOGTAG_ITEM(ACE_dogtag,726);
    ACE_DOGTAG_ITEM(ACE_dogtag,727);
    ACE_DOGTAG_ITEM(ACE_dogtag,728);
    ACE_DOGTAG_ITEM(ACE_dogtag,729);
    ACE_DOGTAG_ITEM(ACE_dogtag,730);
    ACE_DOGTAG_ITEM(ACE_dogtag,731);
    ACE_DOGTAG_ITEM(ACE_dogtag,732);
    ACE_DOGTAG_ITEM(ACE_dogtag,733);
    ACE_DOGTAG_ITEM(ACE_dogtag,734);
    ACE_DOGTAG_ITEM(ACE_dogtag,735);
    ACE_DOGTAG_ITEM(ACE_dogtag,736);
    ACE_DOGTAG_ITEM(ACE_dogtag,737);
    ACE_DOGTAG_ITEM(ACE_dogtag,738);
    ACE_DOGTAG_ITEM(ACE_dogtag,739);
    ACE_DOGTAG_ITEM(ACE_dogtag,740);
    ACE_DOGTAG_ITEM(ACE_dogtag,741);
    ACE_DOGTAG_ITEM(ACE_dogtag,742);
    ACE_DOGTAG_ITEM(ACE_dogtag,743);
    ACE_DOGTAG_ITEM(ACE_dogtag,744);
    ACE_DOGTAG_ITEM(ACE_dogtag,745);
    ACE_DOGTAG_ITEM(ACE_dogtag,746);
    ACE_DOGTAG_ITEM(ACE_dogtag,747);
    ACE_DOGTAG_ITEM(ACE_dogtag,748);
    ACE_DOGTAG_ITEM(ACE_dogtag,749);
    ACE_DOGTAG_ITEM(ACE_dogtag,750);
    ACE_DOGTAG_ITEM(ACE_dogtag,751);
    ACE_DOGTAG_ITEM(ACE_dogtag,752);
    ACE_DOGTAG_ITEM(ACE_dogtag,753);
    ACE_DOGTAG_ITEM(ACE_dogtag,754);
    ACE_DOGTAG_ITEM(ACE_dogtag,755);
    ACE_DOGTAG_ITEM(ACE_dogtag,756);
    ACE_DOGTAG_ITEM(ACE_dogtag,757);
    ACE_DOGTAG_ITEM(ACE_dogtag,758);
    ACE_DOGTAG_ITEM(ACE_dogtag,759);
    ACE_DOGTAG_ITEM(ACE_dogtag,760);
    ACE_DOGTAG_ITEM(ACE_dogtag,761);
    ACE_DOGTAG_ITEM(ACE_dogtag,762);
    ACE_DOGTAG_ITEM(ACE_dogtag,763);
    ACE_DOGTAG_ITEM(ACE_dogtag,764);
    ACE_DOGTAG_ITEM(ACE_dogtag,765);
    ACE_DOGTAG_ITEM(ACE_dogtag,766);
    ACE_DOGTAG_ITEM(ACE_dogtag,767);
    ACE_DOGTAG_ITEM(ACE_dogtag,768);
    ACE_DOGTAG_ITEM(ACE_dogtag,769);
    ACE_DOGTAG_ITEM(ACE_dogtag,770);
    ACE_DOGTAG_ITEM(ACE_dogtag,771);
    ACE_DOGTAG_ITEM(ACE_dogtag,772);
    ACE_DOGTAG_ITEM(ACE_dogtag,773);
    ACE_DOGTAG_ITEM(ACE_dogtag,774);
    ACE_DOGTAG_ITEM(ACE_dogtag,775);
    ACE_DOGTAG_ITEM(ACE_dogtag,776);
    ACE_DOGTAG_ITEM(ACE_dogtag,777);
    ACE_DOGTAG_ITEM(ACE_dogtag,778);
    ACE_DOGTAG_ITEM(ACE_dogtag,779);
    ACE_DOGTAG_ITEM(ACE_dogtag,780);
    ACE_DOGTAG_ITEM(ACE_dogtag,781);
    ACE_DOGTAG_ITEM(ACE_dogtag,782);
    ACE_DOGTAG_ITEM(ACE_dogtag,783);
    ACE_DOGTAG_ITEM(ACE_dogtag,784);
    ACE_DOGTAG_ITEM(ACE_dogtag,785);
    ACE_DOGTAG_ITEM(ACE_dogtag,786);
    ACE_DOGTAG_ITEM(ACE_dogtag,787);
    ACE_DOGTAG_ITEM(ACE_dogtag,788);
    ACE_DOGTAG_ITEM(ACE_dogtag,789);
    ACE_DOGTAG_ITEM(ACE_dogtag,790);
    ACE_DOGTAG_ITEM(ACE_dogtag,791);
    ACE_DOGTAG_ITEM(ACE_dogtag,792);
    ACE_DOGTAG_ITEM(ACE_dogtag,793);
    ACE_DOGTAG_ITEM(ACE_dogtag,794);
    ACE_DOGTAG_ITEM(ACE_dogtag,795);
    ACE_DOGTAG_ITEM(ACE_dogtag,796);
    ACE_DOGTAG_ITEM(ACE_dogtag,797);
    ACE_DOGTAG_ITEM(ACE_dogtag,798);
    ACE_DOGTAG_ITEM(ACE_dogtag,799);
    ACE_DOGTAG_ITEM(ACE_dogtag,800);
    ACE_DOGTAG_ITEM(ACE_dogtag,801);
    ACE_DOGTAG_ITEM(ACE_dogtag,802);
    ACE_DOGTAG_ITEM(ACE_dogtag,803);
    ACE_DOGTAG_ITEM(ACE_dogtag,804);
    ACE_DOGTAG_ITEM(ACE_dogtag,805);
    ACE_DOGTAG_ITEM(ACE_dogtag,806);
    ACE_DOGTAG_ITEM(ACE_dogtag,807);
    ACE_DOGTAG_ITEM(ACE_dogtag,808);
    ACE_DOGTAG_ITEM(ACE_dogtag,809);
    ACE_DOGTAG_ITEM(ACE_dogtag,810);
    ACE_DOGTAG_ITEM(ACE_dogtag,811);
    ACE_DOGTAG_ITEM(ACE_dogtag,812);
    ACE_DOGTAG_ITEM(ACE_dogtag,813);
    ACE_DOGTAG_ITEM(ACE_dogtag,814);
    ACE_DOGTAG_ITEM(ACE_dogtag,815);
    ACE_DOGTAG_ITEM(ACE_dogtag,816);
    ACE_DOGTAG_ITEM(ACE_dogtag,817);
    ACE_DOGTAG_ITEM(ACE_dogtag,818);
    ACE_DOGTAG_ITEM(ACE_dogtag,819);
    ACE_DOGTAG_ITEM(ACE_dogtag,820);
    ACE_DOGTAG_ITEM(ACE_dogtag,821);
    ACE_DOGTAG_ITEM(ACE_dogtag,822);
    ACE_DOGTAG_ITEM(ACE_dogtag,823);
    ACE_DOGTAG_ITEM(ACE_dogtag,824);
    ACE_DOGTAG_ITEM(ACE_dogtag,825);
    ACE_DOGTAG_ITEM(ACE_dogtag,826);
    ACE_DOGTAG_ITEM(ACE_dogtag,827);
    ACE_DOGTAG_ITEM(ACE_dogtag,828);
    ACE_DOGTAG_ITEM(ACE_dogtag,829);
    ACE_DOGTAG_ITEM(ACE_dogtag,830);
    ACE_DOGTAG_ITEM(ACE_dogtag,831);
    ACE_DOGTAG_ITEM(ACE_dogtag,832);
    ACE_DOGTAG_ITEM(ACE_dogtag,833);
    ACE_DOGTAG_ITEM(ACE_dogtag,834);
    ACE_DOGTAG_ITEM(ACE_dogtag,835);
    ACE_DOGTAG_ITEM(ACE_dogtag,836);
    ACE_DOGTAG_ITEM(ACE_dogtag,837);
    ACE_DOGTAG_ITEM(ACE_dogtag,838);
    ACE_DOGTAG_ITEM(ACE_dogtag,839);
    ACE_DOGTAG_ITEM(ACE_dogtag,840);
    ACE_DOGTAG_ITEM(ACE_dogtag,841);
    ACE_DOGTAG_ITEM(ACE_dogtag,842);
    ACE_DOGTAG_ITEM(ACE_dogtag,843);
    ACE_DOGTAG_ITEM(ACE_dogtag,844);
    ACE_DOGTAG_ITEM(ACE_dogtag,845);
    ACE_DOGTAG_ITEM(ACE_dogtag,846);
    ACE_DOGTAG_ITEM(ACE_dogtag,847);
    ACE_DOGTAG_ITEM(ACE_dogtag,848);
    ACE_DOGTAG_ITEM(ACE_dogtag,849);
    ACE_DOGTAG_ITEM(ACE_dogtag,850);
    ACE_DOGTAG_ITEM(ACE_dogtag,851);
    ACE_DOGTAG_ITEM(ACE_dogtag,852);
    ACE_DOGTAG_ITEM(ACE_dogtag,853);
    ACE_DOGTAG_ITEM(ACE_dogtag,854);
    ACE_DOGTAG_ITEM(ACE_dogtag,855);
    ACE_DOGTAG_ITEM(ACE_dogtag,856);
    ACE_DOGTAG_ITEM(ACE_dogtag,857);
    ACE_DOGTAG_ITEM(ACE_dogtag,858);
    ACE_DOGTAG_ITEM(ACE_dogtag,859);
    ACE_DOGTAG_ITEM(ACE_dogtag,860);
    ACE_DOGTAG_ITEM(ACE_dogtag,861);
    ACE_DOGTAG_ITEM(ACE_dogtag,862);
    ACE_DOGTAG_ITEM(ACE_dogtag,863);
    ACE_DOGTAG_ITEM(ACE_dogtag,864);
    ACE_DOGTAG_ITEM(ACE_dogtag,865);
    ACE_DOGTAG_ITEM(ACE_dogtag,866);
    ACE_DOGTAG_ITEM(ACE_dogtag,867);
    ACE_DOGTAG_ITEM(ACE_dogtag,868);
    ACE_DOGTAG_ITEM(ACE_dogtag,869);
    ACE_DOGTAG_ITEM(ACE_dogtag,870);
    ACE_DOGTAG_ITEM(ACE_dogtag,871);
    ACE_DOGTAG_ITEM(ACE_dogtag,872);
    ACE_DOGTAG_ITEM(ACE_dogtag,873);
    ACE_DOGTAG_ITEM(ACE_dogtag,874);
    ACE_DOGTAG_ITEM(ACE_dogtag,875);
    ACE_DOGTAG_ITEM(ACE_dogtag,876);
    ACE_DOGTAG_ITEM(ACE_dogtag,877);
    ACE_DOGTAG_ITEM(ACE_dogtag,878);
    ACE_DOGTAG_ITEM(ACE_dogtag,879);
    ACE_DOGTAG_ITEM(ACE_dogtag,880);
    ACE_DOGTAG_ITEM(ACE_dogtag,881);
    ACE_DOGTAG_ITEM(ACE_dogtag,882);
    ACE_DOGTAG_ITEM(ACE_dogtag,883);
    ACE_DOGTAG_ITEM(ACE_dogtag,884);
    ACE_DOGTAG_ITEM(ACE_dogtag,885);
    ACE_DOGTAG_ITEM(ACE_dogtag,886);
    ACE_DOGTAG_ITEM(ACE_dogtag,887);
    ACE_DOGTAG_ITEM(ACE_dogtag,888);
    ACE_DOGTAG_ITEM(ACE_dogtag,889);
    ACE_DOGTAG_ITEM(ACE_dogtag,890);
    ACE_DOGTAG_ITEM(ACE_dogtag,891);
    ACE_DOGTAG_ITEM(ACE_dogtag,892);
    ACE_DOGTAG_ITEM(ACE_dogtag,893);
    ACE_DOGTAG_ITEM(ACE_dogtag,894);
    ACE_DOGTAG_ITEM(ACE_dogtag,895);
    ACE_DOGTAG_ITEM(ACE_dogtag,896);
    ACE_DOGTAG_ITEM(ACE_dogtag,897);
    ACE_DOGTAG_ITEM(ACE_dogtag,898);
    ACE_DOGTAG_ITEM(ACE_dogtag,899);
    ACE_DOGTAG_ITEM(ACE_dogtag,900);
    ACE_DOGTAG_ITEM(ACE_dogtag,901);
    ACE_DOGTAG_ITEM(ACE_dogtag,902);
    ACE_DOGTAG_ITEM(ACE_dogtag,903);
    ACE_DOGTAG_ITEM(ACE_dogtag,904);
    ACE_DOGTAG_ITEM(ACE_dogtag,905);
    ACE_DOGTAG_ITEM(ACE_dogtag,906);
    ACE_DOGTAG_ITEM(ACE_dogtag,907);
    ACE_DOGTAG_ITEM(ACE_dogtag,908);
    ACE_DOGTAG_ITEM(ACE_dogtag,909);
    ACE_DOGTAG_ITEM(ACE_dogtag,910);
    ACE_DOGTAG_ITEM(ACE_dogtag,911);
    ACE_DOGTAG_ITEM(ACE_dogtag,912);
    ACE_DOGTAG_ITEM(ACE_dogtag,913);
    ACE_DOGTAG_ITEM(ACE_dogtag,914);
    ACE_DOGTAG_ITEM(ACE_dogtag,915);
    ACE_DOGTAG_ITEM(ACE_dogtag,916);
    ACE_DOGTAG_ITEM(ACE_dogtag,917);
    ACE_DOGTAG_ITEM(ACE_dogtag,918);
    ACE_DOGTAG_ITEM(ACE_dogtag,919);
    ACE_DOGTAG_ITEM(ACE_dogtag,920);
    ACE_DOGTAG_ITEM(ACE_dogtag,921);
    ACE_DOGTAG_ITEM(ACE_dogtag,922);
    ACE_DOGTAG_ITEM(ACE_dogtag,923);
    ACE_DOGTAG_ITEM(ACE_dogtag,924);
    ACE_DOGTAG_ITEM(ACE_dogtag,925);
    ACE_DOGTAG_ITEM(ACE_dogtag,926);
    ACE_DOGTAG_ITEM(ACE_dogtag,927);
    ACE_DOGTAG_ITEM(ACE_dogtag,928);
    ACE_DOGTAG_ITEM(ACE_dogtag,929);
    ACE_DOGTAG_ITEM(ACE_dogtag,930);
    ACE_DOGTAG_ITEM(ACE_dogtag,931);
    ACE_DOGTAG_ITEM(ACE_dogtag,932);
    ACE_DOGTAG_ITEM(ACE_dogtag,933);
    ACE_DOGTAG_ITEM(ACE_dogtag,934);
    ACE_DOGTAG_ITEM(ACE_dogtag,935);
    ACE_DOGTAG_ITEM(ACE_dogtag,936);
    ACE_DOGTAG_ITEM(ACE_dogtag,937);
    ACE_DOGTAG_ITEM(ACE_dogtag,938);
    ACE_DOGTAG_ITEM(ACE_dogtag,939);
    ACE_DOGTAG_ITEM(ACE_dogtag,940);
    ACE_DOGTAG_ITEM(ACE_dogtag,941);
    ACE_DOGTAG_ITEM(ACE_dogtag,942);
    ACE_DOGTAG_ITEM(ACE_dogtag,943);
    ACE_DOGTAG_ITEM(ACE_dogtag,944);
    ACE_DOGTAG_ITEM(ACE_dogtag,945);
    ACE_DOGTAG_ITEM(ACE_dogtag,946);
    ACE_DOGTAG_ITEM(ACE_dogtag,947);
    ACE_DOGTAG_ITEM(ACE_dogtag,948);
    ACE_DOGTAG_ITEM(ACE_dogtag,949);
    ACE_DOGTAG_ITEM(ACE_dogtag,950);
    ACE_DOGTAG_ITEM(ACE_dogtag,951);
    ACE_DOGTAG_ITEM(ACE_dogtag,952);
    ACE_DOGTAG_ITEM(ACE_dogtag,953);
    ACE_DOGTAG_ITEM(ACE_dogtag,954);
    ACE_DOGTAG_ITEM(ACE_dogtag,955);
    ACE_DOGTAG_ITEM(ACE_dogtag,956);
    ACE_DOGTAG_ITEM(ACE_dogtag,957);
    ACE_DOGTAG_ITEM(ACE_dogtag,958);
    ACE_DOGTAG_ITEM(ACE_dogtag,959);
    ACE_DOGTAG_ITEM(ACE_dogtag,960);
    ACE_DOGTAG_ITEM(ACE_dogtag,961);
    ACE_DOGTAG_ITEM(ACE_dogtag,962);
    ACE_DOGTAG_ITEM(ACE_dogtag,963);
    ACE_DOGTAG_ITEM(ACE_dogtag,964);
    ACE_DOGTAG_ITEM(ACE_dogtag,965);
    ACE_DOGTAG_ITEM(ACE_dogtag,966);
    ACE_DOGTAG_ITEM(ACE_dogtag,967);
    ACE_DOGTAG_ITEM(ACE_dogtag,968);
    ACE_DOGTAG_ITEM(ACE_dogtag,969);
    ACE_DOGTAG_ITEM(ACE_dogtag,970);
    ACE_DOGTAG_ITEM(ACE_dogtag,971);
    ACE_DOGTAG_ITEM(ACE_dogtag,972);
    ACE_DOGTAG_ITEM(ACE_dogtag,973);
    ACE_DOGTAG_ITEM(ACE_dogtag,974);
    ACE_DOGTAG_ITEM(ACE_dogtag,975);
    ACE_DOGTAG_ITEM(ACE_dogtag,976);
    ACE_DOGTAG_ITEM(ACE_dogtag,977);
    ACE_DOGTAG_ITEM(ACE_dogtag,978);
    ACE_DOGTAG_ITEM(ACE_dogtag,979);
    ACE_DOGTAG_ITEM(ACE_dogtag,980);
    ACE_DOGTAG_ITEM(ACE_dogtag,981);
    ACE_DOGTAG_ITEM(ACE_dogtag,982);
    ACE_DOGTAG_ITEM(ACE_dogtag,983);
    ACE_DOGTAG_ITEM(ACE_dogtag,984);
    ACE_DOGTAG_ITEM(ACE_dogtag,985);
    ACE_DOGTAG_ITEM(ACE_dogtag,986);
    ACE_DOGTAG_ITEM(ACE_dogtag,987);
    ACE_DOGTAG_ITEM(ACE_dogtag,988);
    ACE_DOGTAG_ITEM(ACE_dogtag,989);
    ACE_DOGTAG_ITEM(ACE_dogtag,990);
    ACE_DOGTAG_ITEM(ACE_dogtag,991);
    ACE_DOGTAG_ITEM(ACE_dogtag,992);
    ACE_DOGTAG_ITEM(ACE_dogtag,993);
    ACE_DOGTAG_ITEM(ACE_dogtag,994);
    ACE_DOGTAG_ITEM(ACE_dogtag,995);
    ACE_DOGTAG_ITEM(ACE_dogtag,996);
    ACE_DOGTAG_ITEM(ACE_dogtag,997);
    ACE_DOGTAG_ITEM(ACE_dogtag,998);
    ACE_DOGTAG_ITEM(ACE_dogtag,999);
    ACE_DOGTAG_ITEM(ACE_dogtag,1000);
};
