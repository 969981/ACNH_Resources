
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_027600c0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 local_e0 [2];
  undefined8 *local_d8;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_04bc3858 + 0x10;
  uVar10 = 0;
  do {
    uVar8 = uVar10;
    if (7 < uVar10) {
      uVar8 = 0;
    }
    plVar7 = *(long **)(param_1 + 0x78 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (lVar9 = *plVar7, lVar9 != 0)) {
      local_b8 = 0;
      local_b0 = 0;
      local_cc = 0x68cb8460;
      local_c4 = 0;
      local_e0[0] = 1;
      local_88 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_d8 = &local_cc;
      local_c0 = puVar1;
      FUN_0272d760(lVar9 + 8,&local_88,local_e0);
      if ((local_88 != 0) && ((*(int *)(local_88 + 0x2c) == 1 && (*(long *)(lVar9 + 0x30) != 0)))) {
        local_b8 = local_88;
        local_b0 = local_80;
        local_a8 = uStack_78;
        local_a0 = local_70;
        local_98 = uStack_68;
        local_90 = *(long *)(lVar9 + 0x30);
      }
      lVar9 = (**(code **)(local_c0 + 0x18))(&local_c0);
      if (lVar9 != 0) {
        local_88 = *(long *)(lVar9 + 8);
        local_80 = *(undefined8 *)(lVar9 + 0x10);
        iVar4 = FUN_0272e334(&local_88,0x9db7c754);
        if ((iVar4 != -1) &&
           (piVar6 = (int *)FUN_0272e550(&local_b8,local_90,iVar4,0,0), piVar6 != (int *)0x0)) {
          uVar5 = nn::os::GetSystemTick();
          uVar2 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
          uVar5 = uVar2 ^ uVar2 * 0x800;
          uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
          uVar2 = uVar3 ^ uVar3 * 0x800;
          uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
          uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
          uVar5 = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
          *(short *)(piVar6 + 1) = (short)(uVar5 >> 0x10);
          uVar8 = (ulong)(uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5) * 0x1b;
          *(char *)((long)piVar6 + 6) = (char)(uVar8 >> 0x20);
          lVar9 = (ulong)((uVar5 >> 0x10) + 0x7f1cd4ef) << (uVar8 >> 0x20) + 3;
          iVar4 = (int)((ulong)lVar9 >> 0x20) + (int)lVar9;
          *piVar6 = iVar4;
          *(char *)((long)piVar6 + 7) =
               (char)iVar4 + (char)((uint)iVar4 >> 0x10) + (char)((uint)iVar4 >> 0x18) +
               (char)((uint)iVar4 >> 8) + -0x2d;
        }
      }
    }
    uVar8 = 0xffffffff;
    if (uVar10 != 7) {
      uVar8 = uVar10 + 1;
    }
    if (7 < uVar10) {
      uVar8 = uVar10;
    }
    uVar10 = uVar8;
  } while (uVar8 != 0xffffffff);
  return 1;
}

