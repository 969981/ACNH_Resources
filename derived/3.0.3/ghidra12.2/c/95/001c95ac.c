
void FUN_001c95ac(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  undefined8 local_28;
  
  lVar4 = FUN_001c99f0(*(undefined8 *)(*(long *)(param_1 + 0xe0) + (param_2 & 0xff) * 8));
  puVar3 = PTR_DAT_04bcbb78;
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 8);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar5 != 0) {
      cVar2 = *(char *)(*(long *)(puVar3 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148 +
                       0xb4);
      goto joined_r0x001c963c;
    }
  }
  cVar2 = puVar3[(ulong)uVar1 * 0x2a8 + 0xcc];
joined_r0x001c963c:
  if (cVar2 == '\0') {
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&local_28);
    }
    else {
      FUN_0018c9b0(&local_28,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = local_28;
    *(undefined8 *)(param_1 + 0x138) = local_28;
  }
  FUN_001c6660(param_1,lVar4);
  return;
}

