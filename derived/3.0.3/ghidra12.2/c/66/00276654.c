
void FUN_00276654(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 uint param_5)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bc1510;
  plVar7 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  plVar8 = (long *)FUN_002ba788(*(undefined8 *)puVar2);
  lVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4);
  if (lVar9 != 0) goto LAB_002766b4;
  lVar9 = FUN_00274740(plVar8,param_4);
  if (lVar9 == 0) {
LAB_002766f4:
    cVar1 = *(char *)*param_3;
    if ((param_5 & 1) != 0) goto LAB_00276700;
    FUN_002b4368(param_4);
    uVar12 = FUN_0021fea0();
    if ((uVar12 & 1) != 0) {
      FUN_002b4370(param_4);
      uVar12 = FUN_0021fea0();
      if ((uVar12 & 1) == 0) {
        plVar13 = (long *)FUN_002ba788(*(undefined8 *)puVar2);
        uVar10 = FUN_002b4368(param_4);
        lVar9 = (**(code **)(*plVar13 + 0x38))(plVar13,uVar10);
        if (lVar9 != 0) {
          plVar13 = (long *)FUN_002ba788(*(undefined8 *)puVar2);
          uVar5 = FUN_002b43fc(param_4);
          lVar9 = (**(code **)(*plVar13 + 0x40))(plVar13,uVar5);
          if (lVar9 != 0) {
            plVar13 = (long *)FUN_002ba788(*(undefined8 *)puVar2);
            uVar10 = FUN_002b43ec(param_4);
            lVar9 = (**(code **)(*plVar13 + 0x48))(plVar13,uVar10);
            if (lVar9 != 0) goto LAB_00276810;
          }
          local_6c = 0;
          local_74 = 0x200000000000;
          (**(code **)(*param_4 + 0x20))(param_4,&local_74);
          local_74 = CONCAT44(local_74._4_4_,0xc24);
          goto LAB_00276870;
        }
      }
    }
LAB_00276810:
    lVar9 = (**(code **)(*plVar7 + 0x38))(plVar7,param_3[2]);
    if (lVar9 != 0) {
      uVar12 = FUN_0022740c(lVar9 + 0x10,param_3 + 3);
      if ((uVar12 & 1) == 0) {
        if (cVar1 == '\x01') {
          *(undefined4 *)(lVar9 + 0x4c) = 7;
          goto LAB_00276860;
        }
        FUN_00227418(lVar9 + 0x10,param_3 + 3);
      }
LAB_002768d4:
      FUN_002b4368(param_4);
      uVar12 = FUN_0021fea0();
      if ((lVar9 == 0) && ((uVar12 & 1) != 0)) {
        uVar5 = FUN_002b43fc(param_4);
        lVar9 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar5);
        if (lVar9 == 0) {
LAB_00276700:
          if ((cVar1 == '\a') || (cVar1 == '\x02')) goto LAB_00276860;
          uVar4 = FUN_002b53fc(plVar7);
          if (uVar4 < *(ushort *)(*(long *)puVar2 + 0x58)) {
            lVar9 = FUN_002b43ec(param_4);
            if (lVar9 == 0) {
              lVar9 = 0;
LAB_0027696c:
              bVar3 = false;
              bVar14 = true;
            }
            else {
              lVar9 = FUN_002b43ec(param_4);
              if (lVar9 == 0) goto LAB_0027696c;
              uVar10 = FUN_0026c89c(DAT_04c603c8);
              lVar11 = FUN_00260e70(uVar10,lVar9);
              bVar3 = lVar11 != 0;
              bVar14 = false;
            }
            FUN_0026c89c(DAT_04c603c8);
            uVar6 = FUN_00261120();
            lVar11 = FUN_0026c89c(DAT_04c603c8);
            if ((bVar3) || (uVar6 < *(uint *)(lVar11 + 0x48))) {
              if (!bVar14) {
                plVar8 = (long *)plVar7[4];
                if (plVar8 != plVar7 + 3) {
                  bVar3 = false;
                  do {
                    lVar11 = plVar8[2];
                    if (*(long *)(lVar11 + 0x40) == lVar9) {
                      if (*(int *)(lVar11 + 0x4c) == 5) {
                        bVar3 = true;
                        *(undefined1 *)(lVar11 + 0x88) = 1;
                      }
                      else {
                        bVar3 = true;
                        *(undefined4 *)(lVar11 + 0x4c) = 7;
                      }
                    }
                    plVar8 = (long *)plVar8[1];
                  } while (plVar8 != plVar7 + 3);
                  if (bVar3) goto LAB_00276860;
                }
              }
              goto LAB_002766b4;
            }
          }
          if ((param_5 & 1) != 0) goto LAB_00276860;
          uVar5 = 0xc25;
          goto LAB_00276864;
        }
        if (cVar1 == '\x01') {
          *(undefined4 *)(lVar9 + 0x4c) = 7;
          goto LAB_00276860;
        }
        FUN_00227418(lVar9 + 0x10,param_3 + 3);
      }
      else if (lVar9 == 0) goto LAB_00276700;
LAB_002766b4:
      local_74 = (ulong)local_74._4_4_ << 0x20;
      goto LAB_00276870;
    }
    lVar11 = (**(code **)(*plVar7 + 0x60))(plVar7,param_3 + 3);
    if (lVar11 == 0) goto LAB_002768d4;
    uVar5 = 0xc24;
  }
  else {
    if (*(char *)(lVar9 + 0x38) == -2) {
      (**(code **)(*plVar8 + 0x70))(&local_74,plVar8,lVar9,param_4);
      goto LAB_002766f4;
    }
    *(undefined4 *)(lVar9 + 0x4c) = 7;
LAB_00276860:
    uVar5 = 0x2c18;
  }
LAB_00276864:
  local_74 = CONCAT44(local_74._4_4_,uVar5);
LAB_00276870:
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_74 + 4),(Result *)&local_64);
  FUN_002296c4(param_1,&local_74);
  return;
}

