
void FUN_013684a0(long param_1,short *param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  int local_48;
  int iStack_44;
  
  lVar12 = DAT_05150358;
  if (*param_2 != -2) {
    uVar4 = (uint)*(byte *)(param_2 + 5);
    if (7 < uVar4) {
      uVar4 = 0;
    }
    local_70 = CONCAT44(local_70._4_4_,uVar4);
    lVar11 = **(long **)(param_1 + 8) + 200;
    lVar1 = lVar11 + (ulong)uVar4 * 0x10;
    if (7 < uVar4) {
      lVar1 = lVar11;
    }
    lVar11 = *(long *)(lVar1 + 8);
    if (lVar11 != 0) {
      local_48 = *(int *)(lVar11 + 0x10) + (int)(char)param_2[4];
      iStack_44 = *(int *)(lVar11 + 0x14) + (int)*(char *)((long)param_2 + 9);
      local_58 = CONCAT22(param_2[1],*param_2);
      local_54 = *(undefined4 *)(param_2 + 2);
      local_50 = &DAT_048f9750;
      if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
          ((*(long *)(DAT_05150358 + 0x488) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
         ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
          (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
        uVar4 = FUN_0277d6c4(&local_58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_0124c030(&local_70,&local_58);
          iVar5 = FUN_0123db50(auStack_68,local_60);
          if (iVar5 - 0x18U < 7) {
            uVar6 = FUN_00a8c4b4(DAT_04da7238);
            local_80 = local_58;
            uStack_7c = local_54;
            FUN_01201bc0(&local_78,&local_80,uVar6);
            local_58 = local_78;
            local_54 = uStack_74;
          }
        }
      }
      if ((**(char **)(param_1 + 0x10) != '\0') &&
         (iVar5 = FUN_0277d6c4(&local_58), iVar5 == 0x3333)) {
        local_70 = 0x3332;
        FUN_0277d4ac(&local_70);
        local_58 = (undefined4)local_70;
        local_54 = local_70._4_4_;
      }
      if (*(long *)(lVar1 + 8) != 0) {
        bVar3 = *(byte *)((long)param_2 + 0xb);
        FUN_012e5290(*(long *)(lVar1 + 8),&local_58,&local_50);
        iVar5 = iStack_44;
        lVar12 = *(long *)(lVar1 + 8);
        if (lVar12 != 0) {
          puVar13 = (undefined8 *)(lVar12 + 0x28);
          iVar2 = *(int *)(lVar12 + 0x14);
          uVar4 = local_48 - *(int *)(lVar12 + 0x10);
          plVar9 = (long *)(**(code **)*puVar13)(puVar13);
          uVar7 = (**(code **)(*plVar9 + 0x18))();
          if (uVar4 < uVar7) {
            uVar7 = iVar5 - iVar2;
            plVar9 = (long *)(**(code **)*puVar13)(puVar13);
            uVar8 = (**(code **)(*plVar9 + 0x20))();
            if (uVar7 < uVar8) {
              plVar9 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))(puVar13);
              iVar5 = (**(code **)(*plVar9 + 0x18))();
              plVar9 = (long *)(lVar12 + 0x70);
              uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
              if ((uVar10 & 1) != 0) {
                (**(code **)*plVar9)(plVar9,uVar4 + iVar5 * uVar7,bVar3 & 1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

