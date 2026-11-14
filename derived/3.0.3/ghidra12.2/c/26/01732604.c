
void FUN_01732604(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0xec) == '\0') {
    *(undefined2 *)(param_1 + 0xee) = 0;
    return;
  }
  if ((param_2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1d5) != '\0') {
    puVar6 = (undefined4 *)(param_1 + 0xcc);
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(puVar6);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_017326ac;
    }
    iVar4 = FUN_0277d6c4(puVar6);
    if (iVar4 == 0xfffd) {
      puVar6 = (undefined4 *)&DAT_05586008;
      goto LAB_017326ac;
    }
  }
  puVar6 = (undefined4 *)(param_1 + 0xd4);
LAB_017326ac:
  local_38 = *puVar6;
  uStack_34 = puVar6[1];
  FUN_00765f94(&local_4c,&local_38,*(undefined1 *)(param_1 + 0xed),*(undefined4 *)(param_1 + 0x1d0))
  ;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (*(char *)(param_1 + 0x54) == '\0') {
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
    *(undefined4 *)(param_1 + 0xb4) = local_4c;
    *(undefined8 *)(param_1 + 0xb8) = local_48;
    *(undefined4 *)(param_1 + 0xc0) = local_40;
    *(undefined1 *)(param_1 + 0xc4) = local_3c;
    iVar4 = FUN_0076b954(param_1,&local_4c,param_1 + 0xf8,0,0,0,0,0,0);
    uVar2 = iVar4 - 1U < 2;
    uVar5 = uVar2;
  }
  else {
    if (*(char *)(param_1 + 0x54) == '\0') {
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
    *(undefined4 *)(param_1 + 0xb4) = local_4c;
    *(undefined8 *)(param_1 + 0xb8) = local_48;
    *(undefined4 *)(param_1 + 0xc0) = local_40;
    *(undefined1 *)(param_1 + 0xc4) = local_3c;
    uVar3 = FUN_0076b954(param_1,&local_4c,param_1 + 0xf8,1,0,0,0,0,0);
    uVar2 = 0;
    uVar5 = 0;
    if (uVar3 < 4) {
      uVar2 = (undefined1)(0x10100 >> (ulong)(uVar3 << 3 & 0x1f));
      uVar5 = (char)(0x1010100 >> (ulong)(uVar3 << 3 & 0x1f));
    }
  }
  *(undefined1 *)(param_1 + 0xee) = uVar2;
  *(undefined1 *)(param_1 + 0xef) = uVar5;
  return;
}

