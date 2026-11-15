
bool FUN_01e3b36c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x3b0);
  if (lVar4 == 0) goto LAB_01e3b420;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = puVar5[0x292] + ((ulong)*(uint *)(puVar5[0x292] + 0x10) & 1) * 0x20;
  if (*(char *)(lVar6 + 0x24) == '\0' || *(short *)(lVar6 + 0x14) != -2) {
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4();
    if (*(long *)puVar1 == 0) goto LAB_01e3b420;
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_01e3b420;
  }
  FUN_01e3afc0(param_1);
LAB_01e3b420:
  return lVar4 != 0;
}

