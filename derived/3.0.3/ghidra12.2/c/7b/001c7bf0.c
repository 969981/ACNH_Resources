
void FUN_001c7bf0(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  size_t __n;
  undefined8 uVar13;
  undefined4 local_d0;
  undefined4 uStack_cc;
  
  *(long *)(param_2 + 0x360) = *(long *)(param_2 + 0x360) + 1;
  uVar10 = 0;
  if (*(long *)(param_3 + 0x138) != 0) {
    uVar10 = (ulong)*(ushort *)(*(long *)(param_3 + 0x138) + 0x18);
  }
  *(ulong *)(param_2 + 0x3a8) = *(long *)(param_2 + 0x3a8) + uVar10;
  if ((*(ushort *)(param_3 + 0x60) >> 9 & 1) == 0) {
    if ((*(ushort *)(param_3 + 0x60) >> 10 & 1) != 0) {
      FUN_001e1500(&local_d0);
      FUN_001e15a8(&local_d0,*(long *)PTR_DAT_04bcc2e0 + 0xa0);
      FUN_001e15a8(param_3 + 0x140,&local_d0);
      *(long *)(param_2 + 0x380) = *(long *)(param_2 + 0x380) + 1;
      uVar10 = 0;
      if (*(long *)(param_3 + 0x138) != 0) {
        uVar10 = (ulong)*(ushort *)(*(long *)(param_3 + 0x138) + 0x18);
      }
      *(ulong *)(param_2 + 0x3c8) = *(long *)(param_2 + 0x3c8) + uVar10;
      goto LAB_001c7d28;
    }
    if (*(char *)(param_2 + 0x78) == '\0') {
      FUN_001b8590(param_2 + 0x10);
    }
    FUN_001e15a8(param_3 + 0x140,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    FUN_001e1500(&local_d0);
    FUN_001e15a8(&local_d0,*(long *)PTR_DAT_04bcc2e0 + 0x10);
    if (*(char *)(param_2 + 0x78) == '\0') {
      FUN_001b8590(param_2 + 0x10);
    }
    uVar7 = FUN_001e14f8(*(undefined8 *)(param_2 + 0x18));
    FUN_001e17d0(&local_d0,uVar7);
    FUN_001e15a8(param_3 + 0x140,&local_d0);
    *(long *)(param_2 + 0x378) = *(long *)(param_2 + 0x378) + 1;
    uVar10 = 0;
    if (*(long *)(param_3 + 0x138) != 0) {
      uVar10 = (ulong)*(ushort *)(*(long *)(param_3 + 0x138) + 0x18);
    }
    *(ulong *)(param_2 + 0x3c0) = *(long *)(param_2 + 0x3c0) + uVar10;
LAB_001c7d28:
    FUN_001e1868(&local_d0);
  }
  iVar6 = FUN_001b8fa0(param_2 + 0x10,&DAT_0410a6c4,0xffffffff);
  if (iVar6 == -1) {
    uVar2 = *(uint *)(*(long *)(param_2 + 8) + 8);
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c7da0:
      puVar11 = PTR_DAT_04bcbb78 + (ulong)uVar2 * 0x2a8 + 0x18;
    }
    else {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar8 == 0) goto LAB_001c7da0;
      puVar11 = (undefined *)
                (*(long *)(PTR_DAT_04bcbb78 + (ulong)uVar2 * 0x2a8 + 0x10) + (ulong)*puVar8 * 0x148)
      ;
    }
    iVar6 = *(int *)(puVar11 + 0x140);
  }
  *(int *)(param_3 + 0x1e8) = iVar6;
  __n = *(size_t *)(param_2 + 0x198);
  memcpy((void *)(param_3 + 0x48),(void *)(param_2 + 0x188),__n);
  *(size_t *)(param_3 + 0x58) = __n;
  *(undefined1 *)(param_3 + 0xa1) = *(undefined1 *)(param_2 + 0x1e9);
  uVar4 = *(ushort *)(param_3 + 0x60);
  if ((uVar4 >> 5 & 1) != 0) {
    *(long *)(param_2 + 0x440) = *(long *)(param_2 + 0x440) + 1;
    uVar10 = 0;
    if (*(long *)(param_3 + 0x138) != 0) {
      uVar10 = (ulong)*(ushort *)(*(long *)(param_3 + 0x138) + 0x18);
    }
    *(ulong *)(param_2 + 0x448) = *(long *)(param_2 + 0x448) + uVar10;
    if (*(short *)(param_3 + 0x200) == 0) {
      *(long *)(param_2 + 0x478) = *(long *)(param_2 + 0x478) + 1;
      uVar10 = (**(code **)(**(long **)(param_2 + 0x328) + 0x10))
                         (*(long **)(param_2 + 0x328),param_3,
                          *(undefined4 *)(*(long *)(param_2 + 8) + 8),1);
      if (((uVar10 & 1) == 0) ||
         (uVar10 = FUN_001c9300(*(undefined8 *)
                                 (*(long *)(param_2 + 0xe0) + (ulong)*(byte *)(param_3 + 0xa4) * 8),
                                param_3), (uVar10 & 1) == 0)) {
        FUN_001c9198(param_1,param_2);
        return;
      }
    }
    FUN_001c95ac(param_2,*(undefined1 *)(param_3 + 0xa4));
    goto LAB_001c8024;
  }
  *(long *)(param_2 + 0x368) = *(long *)(param_2 + 0x368) + 1;
  lVar12 = *(long *)(param_3 + 0x138);
  if (lVar12 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x18);
  }
  *(ulong *)(param_2 + 0x3b0) = *(long *)(param_2 + 0x3b0) + uVar10;
  if ((uVar4 & 0x201f) == 2) {
    *(long *)(param_2 + 0x370) = *(long *)(param_2 + 0x370) + 1;
    uVar10 = 0;
    if (lVar12 != 0) {
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x18);
    }
    *(ulong *)(param_2 + 0x3b8) = *(long *)(param_2 + 0x3b8) + uVar10;
    psVar1 = (short *)(param_2 + 0x150);
    if ((uVar4 & 0x600) != 0) {
      psVar1 = (short *)(*(long *)(param_2 + 0x168) + 8);
    }
    *(short *)(param_3 + 0x70) = *psVar1;
    *psVar1 = *psVar1 + 1;
    uVar10 = (**(code **)(**(long **)(param_2 + 0x328) + 0x10))
                       (*(long **)(param_2 + 0x328),param_3,
                        *(undefined4 *)(*(long *)(param_2 + 8) + 8),1);
    if ((uVar10 & 1) == 0) goto LAB_001c8024;
  }
  puVar11 = PTR_DAT_04bcbb78;
  uVar2 = *(uint *)(*(long *)(param_2 + 8) + 8);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c7f20:
    cVar3 = puVar11[(ulong)uVar2 * 0x2a8 + 0xcc];
  }
  else {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar8 == 0) goto LAB_001c7f20;
    cVar3 = *(char *)(*(long *)(puVar11 + (ulong)uVar2 * 0x2a8 + 0x10) + (ulong)*puVar8 * 0x148 +
                     0xb4);
  }
  if (cVar3 != '\0') {
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&local_d0);
    }
    else {
      FUN_0018c9b0(&local_d0,0);
    }
    *(ulong *)PTR_DAT_04bcbcb0 = CONCAT44(uStack_cc,local_d0);
    *(ulong *)(param_2 + 0x138) = CONCAT44(uStack_cc,local_d0);
  }
  uVar13 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined2 *)(param_2 + 0xc0);
  uVar7 = FUN_001b8fa0(param_2 + 0x10,&DAT_0410a683,0);
  uVar9 = (**(code **)(**(long **)(param_2 + 0x328) + 0x48))();
  FUN_001c96a0(uVar13,uVar5,uVar7,param_3,uVar9);
LAB_001c8024:
  local_d0 = 0x10001;
  FUN_0018aa70(param_1,&local_d0);
  return;
}

