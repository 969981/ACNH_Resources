
uint FUN_0264b650(byte *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_44 [4];
  
  uVar4 = FUN_02649430(param_2);
  if (((uVar4 & 1) == 0) && (DAT_04c487d4 != -1)) {
    local_78 = CONCAT44(local_78._4_4_,0x20);
    uVar2 = 0;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) == 0) || (7 < *param_1)) goto LAB_0264b9b8;
    uVar2 = FUN_02582d8c(param_1,1);
    if ((uVar2 < 8) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0' &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')))) {
      local_44[0] = *param_1;
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      lVar5 = FUN_02583354(DAT_055021a0,local_44,1);
      uVar2 = 0;
      if (lVar5 == 0) goto LAB_0264b9b8;
      lVar10 = lVar5 + 0x194b0;
      lVar9 = lVar10;
      if (*(long *)(lVar5 + 0x194b8) == 0) {
        lVar9 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long *)(lVar9 + 0x1090) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x1090) + 0x10), puVar6 == (undefined8 *)0x0))
      {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 & 0xffffffff;
      }
      puVar1 = PTR_DAT_04bb43c0;
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(param_2);
      lVar11 = *(long *)puVar1;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          local_80 = 0;
          local_88 = *param_2;
          uStack_84 = param_2[1];
          local_90 = &PTR_FUN_04a36b50;
          uVar2 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar2 = FUN_0277d6c4(param_2);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar11 + 0x1d8)) &&
                 (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8), lVar11 != 0)
                 ) {
                local_80 = lVar11;
              }
            }
          }
          FUN_01ad78cc(&local_90);
          iVar3 = FUN_01ad7260(&local_90);
          if (iVar3 != 0) {
            iVar3 = FUN_01b00960(param_2);
            if (iVar3 != -1) {
              if (*(long *)(lVar5 + 0x194b8) == 0) {
                lVar10 = *(long *)(DAT_05574040 + 0x20);
              }
              if ((((*(long **)(lVar10 + 0x1100) != (long *)0x0) &&
                   (puVar6 = (undefined8 *)**(long **)(lVar10 + 0x1100), puVar6 != (undefined8 *)0x0
                   )) && (uVar7 = (**(code **)*puVar6)(), (uVar7 & 1) != 0)) &&
                 ((*(long *)(lVar10 + 0x1100) != 0 &&
                  (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x1100) + 8),
                  puVar6 != (undefined8 *)0x0)))) {
                (**(code **)*puVar6)();
              }
            }
            FUN_0264cb90(lVar5,param_2);
          }
          if ((*(long *)(lVar9 + 0x1090) != 0) &&
             (plVar8 = *(long **)(*(long *)(lVar9 + 0x1090) + 0x20), plVar8 != (long *)0x0)) {
            local_78 = *(undefined8 *)(lVar9 + 0x1070);
            uStack_70 = *(undefined8 *)(lVar9 + 0x1078);
            local_68 = 0x754;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
          }
          uVar2 = FUN_02779e74(*(long *)(lVar9 + 0x1078) + *(long *)(lVar9 + 0x1070),param_2,1);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x1090) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x1090) + 0x18),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
          goto LAB_0264b9b8;
        }
      }
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x1090) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x1090) + 0x18), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
  }
  uVar2 = 0;
LAB_0264b9b8:
  return uVar2 & 1;
}

