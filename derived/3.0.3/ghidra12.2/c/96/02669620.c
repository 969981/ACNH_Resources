
void FUN_02669620(byte *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte *pbVar10;
  byte local_5c [12];
  byte local_34 [4];
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_2), lVar4 != 0)) {
    FUN_02507c6c(local_5c,1,1,0,0);
    puVar3 = PTR_DAT_04bb5038;
    puVar2 = PTR_DAT_04bb4f78;
    if (local_5c[0] < 8) {
      do {
        local_34[0] = local_5c[0];
        lVar5 = FUN_025830c0(*(undefined8 *)puVar2,local_34,1);
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 0x17f68);
          if ((long *)*plVar1 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            puVar6 = *(undefined8 **)*plVar1;
            uVar7 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar7 = (**(code **)*puVar6)();
            }
          }
          if (lVar4 == lVar5) {
            bVar9 = local_5c[0];
            if (7 < local_5c[0]) {
              bVar9 = 0xff;
            }
            *param_1 = bVar9;
            if ((uVar7 & 1) == 0) {
              return;
            }
            if (*plVar1 == 0) {
              return;
            }
            puVar6 = *(undefined8 **)(*plVar1 + 8);
            if (puVar6 == (undefined8 *)0x0) {
              return;
            }
            (**(code **)*puVar6)();
            return;
          }
          if ((((uVar7 & 1) != 0) && (*plVar1 != 0)) &&
             (puVar6 = *(undefined8 **)(*plVar1 + 8), puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
        }
        bVar9 = local_5c[0];
        uVar7 = (ulong)local_5c[0];
        if ((7 < local_5c[0]) || (uVar7 + 1 == 8)) break;
        pbVar10 = puVar3 + uVar7 + 1;
        uVar8 = FUN_02507924(local_5c,pbVar10);
        if ((uVar8 & 1) == 0) {
          if (uVar7 + 2 == 8) break;
          pbVar10 = puVar3 + uVar7 + 2;
          uVar8 = FUN_02507924(local_5c,pbVar10);
          if ((uVar8 & 1) == 0) {
            if (uVar7 + 3 == 8) break;
            pbVar10 = puVar3 + uVar7 + 3;
            uVar8 = FUN_02507924(local_5c,pbVar10);
            if ((uVar8 & 1) == 0) {
              if (uVar7 + 4 == 8) break;
              pbVar10 = puVar3 + uVar7 + 4;
              uVar8 = FUN_02507924(local_5c,pbVar10);
              if ((uVar8 & 1) == 0) {
                if (uVar7 + 5 == 8) break;
                pbVar10 = puVar3 + uVar7 + 5;
                uVar8 = FUN_02507924(local_5c,pbVar10);
                if ((uVar8 & 1) == 0) {
                  if (uVar7 + 6 == 8) break;
                  pbVar10 = puVar3 + uVar7 + 6;
                  uVar8 = FUN_02507924(local_5c,pbVar10);
                  if ((uVar8 & 1) == 0) {
                    if (uVar7 + 7 == 8) break;
                    pbVar10 = puVar3 + uVar7 + 7;
                    uVar8 = FUN_02507924(local_5c,pbVar10);
                    if ((uVar8 & 1) == 0) {
                      if (bVar9 == 0) break;
                      pbVar10 = puVar3 + uVar7 + 8;
                      FUN_02507924(local_5c,pbVar10);
                    }
                  }
                }
              }
            }
          }
        }
        local_5c[0] = *pbVar10;
      } while (local_5c[0] < 8);
    }
  }
  bVar9 = *PTR_DAT_04bb32e0;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *param_1 = bVar9;
  return;
}

