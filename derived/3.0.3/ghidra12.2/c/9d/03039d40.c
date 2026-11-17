
undefined8 FUN_03039d40(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined1 auStack_16fa [2];
  undefined8 local_16f8;
  long local_16f0;
  long local_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined4 uStack_16c0;
  undefined4 local_16bc;
  undefined4 uStack_16b8;
  undefined8 local_16b4;
  undefined4 local_16ac;
  undefined1 local_16a8;
  undefined8 local_16a4;
  undefined8 local_169c;
  undefined5 local_1694;
  undefined3 uStack_168f;
  undefined4 local_168c;
  undefined1 local_1688;
  undefined1 local_1687;
  undefined2 local_1686;
  undefined1 auStack_1680 [5672];
  undefined2 local_58 [8];
  undefined2 local_48 [2];
  char local_44 [4];
  
  puVar3 = PTR_DAT_04bb3720;
  puVar2 = PTR_DAT_04bb3170;
  puVar8 = *(uint **)PTR_DAT_04bb3720;
  uVar1 = *puVar8;
  if ((int)puVar8[1] <= (int)uVar1) {
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (**(long **)(*(long *)(puVar8 + 2) + uVar7 * 8) == 0) {
          if ((int)uVar7 < 0) {
            return 1;
          }
          goto LAB_03039d7c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    return 1;
  }
LAB_03039d7c:
  FUN_007ef010(local_58,PTR_DAT_04bb3170);
  local_44[0] = '\0';
  iVar4 = FUN_01d6d448(param_2,local_44);
  if (iVar4 == 0) {
    if (local_44[0] == '\0') {
      local_16b4 = 0;
      local_16a8 = 2;
      local_1687 = 0xee;
      local_16c8 = 0;
      uStack_16c0 = 0;
      local_16ac = 0;
      local_16bc = 0;
      uStack_16b8 = 0;
      local_16a4 = 0;
      local_169c = 0;
      local_1694 = 0;
      uStack_168f = 0;
      local_168c = 0;
      local_1686 = 0;
      local_16d8 = 0;
      uStack_16d0 = 0;
      local_16e8 = 0;
      uStack_16e0 = 0;
      local_16f8 = 0;
      local_16f0 = 0;
      memset(auStack_1680,0,0x830);
      local_1688 = 1;
      iVar4 = FUN_01d6d864(param_2,&local_16f8);
      lVar9 = local_16f0;
      if (iVar4 == 0) {
        FUN_007eaf80(local_48,*(undefined8 *)puVar3,local_16f0,&local_16f8);
        goto LAB_03039ff4;
      }
    }
    else {
      local_16b4 = 0;
      local_16a8 = 2;
      local_1687 = 0xee;
      local_16c8 = 0;
      uStack_16c0 = 0;
      local_16ac = 0;
      local_16bc = 0;
      uStack_16b8 = 0;
      local_16a4 = 0;
      local_169c = 0;
      local_1694 = 0;
      uStack_168f = 0;
      local_168c = 0;
      local_1688 = 0;
      local_1686 = 0;
      local_16d8 = 0;
      uStack_16d0 = 0;
      local_16e8 = 0;
      uStack_16e0 = 0;
      local_16f8 = 0;
      local_16f0 = 0;
      memset(auStack_1680,0,0x230);
      iVar4 = FUN_01d6d674(param_2,&local_16f8);
      lVar9 = local_16f0;
      if (iVar4 == 0) {
        puVar8 = *(uint **)puVar3;
        uVar1 = *puVar8;
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (**(long **)(*(long *)(puVar8 + 2) + uVar7 * 8) == local_16f0) {
              if (-1 < (int)uVar7) goto LAB_03039fe4;
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar1 != uVar7);
        }
        plVar6 = (long *)FUN_007eada0();
        if (plVar6 == (long *)0x0) {
LAB_03039fe4:
          plVar6 = (long *)&DAT_04cb6038;
        }
        else {
          *(undefined1 *)((long)plVar6 + 10) = 0;
          *plVar6 = lVar9;
          FUN_027c1640(plVar6 + 2,&local_16f8);
          plVar6 = plVar6 + 1;
        }
        FUN_007ef010(local_48,plVar6);
LAB_03039ff4:
        local_58[0] = local_48[0];
        goto LAB_03039dac;
      }
    }
  }
  lVar9 = 0;
LAB_03039dac:
  puVar10 = (undefined2 *)(param_1 + 0x30);
  *puVar10 = local_58[0];
  *(long *)(param_1 + 0x38) = lVar9;
  FUN_007ef010(auStack_16fa,puVar10);
  FUN_007e4920(&local_16f8,auStack_16fa);
  if (((short)local_16f8 == *(short *)puVar2) || ((local_16e8 == 0 && (local_16f0 == 0)))) {
    uVar5 = 4;
  }
  else {
    if (((*(ushort *)(param_1 + 0x50) >> 3 & 1) == 0) && (*(long *)(DAT_05231900 + 0x100) != 0)) {
      FUN_015a2df4(*(long *)(DAT_05231900 + 0x100),param_1 + 0x40,puVar10,(long *)(param_1 + 0x38),0
                   ,1);
    }
    uVar5 = 2;
  }
  return uVar5;
}

