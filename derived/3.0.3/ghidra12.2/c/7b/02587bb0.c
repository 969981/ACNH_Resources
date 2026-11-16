
void FUN_02587bb0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  byte local_64 [4];
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(byte *)(param_1 + 8) < 8) {
    FUN_02507c6c(&local_58,1,1,0,0);
    puVar2 = PTR_DAT_04bb5038;
    local_60 = local_58._4_4_;
    local_64[0] = (byte)local_58;
    if (7 < (byte)local_58) {
      local_64[0] = 0xff;
    }
    local_5c = (undefined2)local_50;
    if ((byte)local_58 < 8) {
      bVar9 = *(byte *)(param_1 + 8);
      bVar11 = bVar9;
      if (7 < bVar9) {
        bVar11 = 0xff;
      }
      bVar1 = (byte)local_58;
      if (bVar11 != (byte)local_58) {
        do {
          uVar8 = (ulong)bVar1;
          do {
            if (uVar8 == 7) {
              return;
            }
            uVar8 = uVar8 + 1;
            uVar5 = FUN_02507924(local_64,puVar2 + uVar8);
          } while ((uVar5 & 1) == 0);
          local_64[0] = puVar2[uVar8];
          if (7 < local_64[0]) {
            return;
          }
          bVar9 = *(byte *)(param_1 + 8);
          bVar11 = bVar9;
          if (7 < bVar9) {
            bVar11 = 0xff;
          }
          bVar1 = local_64[0];
        } while (bVar11 != local_64[0]);
      }
      if (bVar9 < 8) {
        local_58 = CONCAT71(local_58._1_7_,bVar9);
        lVar4 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
      }
      else {
        if (*(int *)(param_1 + 0xc) == -1) {
          return;
        }
        if (DAT_05574040 == 0) {
          return;
        }
        lVar4 = FUN_026eec4c();
      }
      if (lVar4 != 0) {
        lVar12 = lVar4 + 0x194b0;
        if (*(long *)(lVar4 + 0x194b8) == 0) {
          lVar12 = *(long *)(DAT_05574040 + 0x20);
        }
        lVar4 = *(long *)PTR_DAT_04bb26a8;
        uVar3 = FUN_0277d6c4(*param_2);
        lVar4 = *(long *)(lVar4 + 0x19f860);
        if (lVar4 != 0) {
          do {
            if (uVar3 < *(ushort *)(lVar4 + 0x20)) {
              plVar6 = (long *)(lVar4 + 8);
            }
            else {
              if (uVar3 <= *(ushort *)(lVar4 + 0x20)) {
                uVar3 = *(ushort *)(lVar4 + 0x22);
                if (0x7f < (ulong)uVar3) {
                  return;
                }
                lVar4 = *(long *)(lVar12 + 0x2a920);
                if (lVar4 == 0) {
                  uVar8 = 0;
                }
                else {
                  if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
                    lVar4 = *(long *)(lVar12 + 0x2a920);
                    uVar8 = uVar8 & 0xffffffff;
                    if (lVar4 == 0) goto LAB_02587dc4;
                  }
                  plVar6 = *(long **)(lVar4 + 0x20);
                  if (plVar6 != (long *)0x0) {
                    local_58 = *(long *)(lVar12 + 0x2a900);
                    local_50 = *(undefined8 *)(lVar12 + 0x2a908);
                    uStack_48 = 0x200;
                    (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
                  }
                }
LAB_02587dc4:
                lVar4 = *(long *)(lVar12 + 0x2a908) + *(long *)(lVar12 + 0x2a900);
                lVar10 = (ulong)uVar3 * 4;
                *(int *)(lVar4 + lVar10) = *(int *)(lVar4 + lVar10) + 1;
                if ((uVar8 & 1) == 0) {
                  return;
                }
                if (*(long *)(lVar12 + 0x2a920) == 0) {
                  return;
                }
                puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x2a920) + 0x18);
                if (puVar7 == (undefined8 *)0x0) {
                  return;
                }
                (**(code **)*puVar7)();
                return;
              }
              plVar6 = (long *)(lVar4 + 0x10);
            }
            lVar4 = *plVar6;
          } while (lVar4 != 0);
        }
      }
    }
  }
  return;
}

