
void FUN_01fdec80(long param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined1 *__dest;
  
  if (*(long *)PTR_DAT_04bb4e28 != 0) {
    iVar3 = FUN_037289d0(*(long *)PTR_DAT_04bb4e28,*(long *)(param_1 + 8) + 0x3e0,param_2 & 1);
    if (*(int *)(param_1 + 0x123bc) != iVar3) {
      *(int *)(param_1 + 0x123bc) = iVar3;
      puVar1 = (ushort *)(param_1 + 0x1242c);
      *(undefined1 *)(param_1 + 0x7878) = 1;
      uVar2 = *puVar1;
      if ((uVar2 & 1) != 0) {
        __dest = *(undefined1 **)(param_1 + 0x8260);
        if (__dest != &DAT_04066c7f) {
          iVar3 = 4;
          if (*(int *)(param_1 + 0x8268) < 5) {
            iVar3 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(__dest,&DAT_04066c7f,(long)iVar3);
          __dest[iVar3] = 0;
          uVar2 = *puVar1;
        }
        *puVar1 = uVar2 & 0xfffe;
        *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
             *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xfffbffff;
        if ((*(uint *)(param_1 + 0x123bc) < 0x3d) &&
           ((1L << ((ulong)*(uint *)(param_1 + 0x123bc) & 0x3f) & 0x1002000000204910U) != 0)) {
          FUN_0212eca8(param_1 + 0xaa50,0,0);
        }
      }
      if ((((*puVar1 >> 6 & 1) != 0) &&
          (*puVar1 = *puVar1 & 0xff3f | 0x80, (*(byte *)(param_1 + 0xe724) & 1) != 0)) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0xb0c0) + 0x3b8),
         *(int *)(lVar4 + 0xaa00) != 3 && (*(byte *)(lVar4 + 0xaa44) & 4) != 0)) {
        FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
      }
      *(undefined4 *)(param_1 + 0x124bc) = 0xffffffff;
    }
  }
  return;
}

