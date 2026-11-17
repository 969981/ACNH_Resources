
undefined8 FUN_02b61e80(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined **local_c0;
  char *pcStack_b8;
  long *local_b0;
  short *psStack_a8;
  char local_9c [4];
  long local_98;
  short local_8c [2];
  undefined **local_88;
  undefined1 *puStack_80;
  short *local_78;
  
  puStack_80 = (undefined1 *)&local_c0;
  if (param_1 != 0) {
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,param_2);
    local_8c[0] = 0;
    local_88 = &PTR_LAB_04aa4c40;
    local_98 = param_1;
    local_78 = local_8c;
    FUN_02acd4a0(&local_88);
    puVar3 = PTR_DAT_04bb27a8;
    if (local_8c[0] != 0) {
      uVar9 = 0;
      do {
        local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar9);
        if (uVar9 == 0) {
          plVar6 = (long *)(*(long *)puVar3 + 0x1f8);
        }
        else {
          plVar1 = (long *)(*(long *)puVar3 + 0x30);
          plVar6 = plVar1 + uVar9;
          if (0x38 < uVar9) {
            plVar6 = plVar1;
          }
        }
        puVar2 = &DAT_05636dd8;
        if (*plVar6 != 0) {
          puVar2 = (undefined8 *)(*plVar6 + 0x148);
        }
        if (puVar2[1] != 0) {
          pcStack_b8 = local_9c;
          local_9c[0] = '\0';
          local_c0 = &PTR_FUN_04aa4c18;
          if (puVar2[1] != 0) {
            local_b0 = &local_98;
            psStack_a8 = local_8c;
            plVar6 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
            iVar5 = (**(code **)(*plVar6 + 0x18))();
            if (0 < iVar5) {
              iVar8 = 0;
              do {
                FUN_01360490(&local_88,puVar2[1],iVar8);
                uVar7 = (*(code *)*local_c0)(&local_c0,&local_88);
                if ((uVar7 & 1) != 0) break;
                bVar4 = iVar5 + -1 != iVar8;
                iVar8 = iVar8 + 1;
              } while (bVar4);
            }
          }
          if (local_9c[0] != '\0') {
            return 1;
          }
        }
        uVar10 = 0x39;
        if ((int)uVar9 < 0x39) {
          uVar10 = uVar9 + 1;
        }
        uVar9 = uVar10;
      } while (uVar10 != 0x39);
    }
  }
  return 0;
}

