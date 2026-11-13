
uint FUN_012f74a8(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined5 local_5c;
  undefined3 uStack_57;
  undefined5 uStack_54;
  undefined *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  float local_2c [3];
  
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  uVar6 = iVar1 - *(int *)(lVar5 + 0x28);
  uVar2 = *(uint *)(lVar5 + 0x18);
  uVar4 = iVar3 - *(int *)(lVar5 + 0x2c);
  if ((uVar6 < uVar2 && uVar4 <= *(uint *)(lVar5 + 0x1c)) &&
      (uVar2 <= uVar6 || *(uint *)(lVar5 + 0x1c) != uVar4)) {
    uVar6 = uVar6 + uVar2 * uVar4;
  }
  else {
    if (*(char *)(lVar5 + 0x88) == '\0') {
      puVar7 = &DAT_051a50f0;
      goto LAB_012f755c;
    }
    uVar6 = iVar1 - *(int *)(lVar5 + 0x98);
    puVar7 = &DAT_051a50f0;
    if ((*(uint *)(lVar5 + 0xa0) <= uVar6) ||
       (uVar2 = iVar3 - *(int *)(lVar5 + 0x9c), *(uint *)(lVar5 + 0xa4) <= uVar2))
    goto LAB_012f755c;
    uVar6 = uVar6 + *(uint *)(lVar5 + 0xa0) * uVar2 + *(int *)(lVar5 + 0x8c);
  }
  if (*(uint *)(lVar5 + 0x30) <= uVar6) {
    uVar6 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar6 * 0x68);
LAB_012f755c:
  uVar6 = *(uint *)((long)puVar7 + 0xc) >> 3 & 1;
  if ((param_3 != (undefined8 *)0x0) && ((*(uint *)((long)puVar7 + 0xc) >> 3 & 1) != 0)) {
    local_2c[1] = 0.0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_68 = 7;
    local_b0 = PTR_DAT_04bb2cc0 + 0x10;
    local_80 = PTR_DAT_04bb2ca0 + 0x10;
    local_48 = PTR_DAT_04bb2010 + 0x10;
    local_64 = 0;
    local_2c[0] = (float)iVar1 * 10.0 + 5.0;
    local_2c[2] = (float)iVar3 * 10.0 + 5.0;
    local_5c = 0;
    uStack_57 = 0;
    uStack_54 = 0;
    local_38 = 0;
    local_34 = 0;
    uStack_a8 = 0;
    local_78 = 0;
    uStack_40 = 0;
    FUN_0093ab70(*(long *)PTR_DAT_04bb27c8 + 0x28,local_2c,&local_b0);
    uVar6 = 1;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_70;
    *param_3 = local_78;
  }
  return uVar6;
}

