
void FUN_0285f510(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_94 [4];
  byte local_90 [4];
  undefined4 local_8c;
  undefined2 local_88;
  byte local_84 [4];
  undefined4 local_80;
  undefined2 local_7c;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bb46b0;
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    puVar11 = *(uint **)PTR_DAT_04bb3448;
    if (puVar11 != (uint *)0x0) {
      FUN_02507c6c(local_84,1,1,0,0);
      puVar3 = PTR_DAT_04bb5038;
      uVar14 = (uint)local_84[0];
      local_8c = local_80;
      local_90[0] = 0xff;
      if (local_84[0] < 8) {
        local_90[0] = local_84[0];
      }
      local_88 = local_7c;
      if (local_84[0] < 8) {
        puVar12 = (undefined8 *)PTR_DAT_04bb4f78;
        do {
          local_94[0] = (undefined1)uVar14;
          lVar4 = FUN_02583354(*puVar12,local_94,1);
          if (lVar4 != 0) {
            lVar9 = lVar4 + 0x194b0;
            if (*(long *)(lVar4 + 0x194b8) == 0) {
              lVar9 = *(long *)(*(long *)puVar2 + 0x20);
            }
            plVar1 = (long *)(lVar9 + 0x2a628);
            lVar4 = *(long *)(lVar9 + 0x2a648);
            if (lVar4 == 0) {
              uVar13 = *puVar11;
              if (0xf < uVar13) {
                uVar13 = 0;
              }
              *(uint *)(*(long *)(lVar9 + 0x2a630) + *plVar1) = uVar13;
            }
            else {
              if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
                uVar13 = *puVar11;
                uVar5 = 0;
LAB_0285f664:
                plVar6 = *(long **)(lVar4 + 0x20);
                if (plVar6 != (long *)0x0) {
                  local_78 = *plVar1;
                  local_70 = *(undefined8 *)(lVar9 + 0x2a630);
                  uStack_68 = 4;
                  (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
                }
              }
              else {
                uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
                lVar4 = *(long *)(lVar9 + 0x2a648);
                uVar5 = uVar5 & 0xffffffff;
                uVar13 = *puVar11;
                if (lVar4 != 0) goto LAB_0285f664;
              }
              if (0xf < uVar13) {
                uVar13 = 0;
              }
              *(uint *)(*(long *)(lVar9 + 0x2a630) + *plVar1) = uVar13;
              puVar12 = (undefined8 *)PTR_DAT_04bb4f78;
              if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x2a648) != 0)) &&
                 (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2a648) + 0x18),
                 puVar7 != (undefined8 *)0x0)) {
                (**(code **)*puVar7)();
              }
            }
          }
          uVar5 = (ulong)uVar14;
          do {
            if (uVar5 == 7) goto LAB_0285f590;
            uVar5 = uVar5 + 1;
            uVar8 = FUN_02507924(local_90,puVar3 + uVar5);
          } while ((uVar8 & 1) == 0);
          local_90[0] = puVar3[uVar5];
          uVar14 = (uint)local_90[0];
        } while (uVar14 < 8);
      }
    }
LAB_0285f590:
    *(byte *)(lVar10 + 0x453) = *(byte *)(lVar10 + 0x453) & 0xf7;
  }
  return;
}

