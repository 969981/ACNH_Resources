
void FUN_027e0ffc(long param_1,uint param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  
  if (param_2 < 3) {
    *(char *)(param_1 + 0x1e3366) = (char)param_2;
    bVar4 = *(byte *)(param_1 + (ulong)param_2 + 0x1e3363);
    if ((bVar4 < 10) && (uVar9 = (uint)bVar4, (&DAT_053fee41)[(ulong)bVar4 * 0xba0] != '\0')) {
      param_1 = param_1 + (ulong)uVar9 * 0x13230;
      *(char *)(param_1 + 0x13151) = (char)param_3;
      *(undefined1 *)(param_1 + 0x13152) = param_4;
      if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
        if (*(long *)(DAT_053e0208 + 0x16608) == 0) {
          return;
        }
        puVar7 = *(uint **)(*(long *)(DAT_053e0208 + 0x16608) + 8);
        if (puVar7 == (uint *)0x0) {
          return;
        }
        if ((7 < *(uint *)(DAT_053e0208 + 0x16620)) &&
           (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 7) == '\0')) {
          return;
        }
        if (*puVar7 < 8) {
          return;
        }
        if (puVar7[1] == 0) {
          return;
        }
        if ((ushort)puVar7[2] == 0) {
          return;
        }
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar6 = (ulong)(puVar7[1] * 7 + (uint)(ushort)puVar7[2] * 8 + iVar8) + (long)puVar7;
      }
      else {
        if (*(uint *)(DAT_053e0208 + 0x16718) < 8) {
          return;
        }
        lVar6 = 0x38;
        if (*(uint *)(DAT_053e0208 + 0x16708) < 8) {
          lVar6 = 0;
        }
        lVar6 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar6);
      }
      if (lVar6 != 0) {
        cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        uVar3 = *(undefined1 *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
        uVar2 = (int)cVar5 + 0x18;
        if (4 < cVar5) {
          uVar2 = (int)cVar5;
        }
        iVar8 = param_3 + 0x18;
        if (4 < param_3) {
          iVar8 = param_3;
        }
        FUN_0214ca00(&local_4c);
        local_4c = (undefined1)uVar2;
        iVar1 = uVar9 * 0xba0 + 0x53febf8;
        local_4a = (undefined1)iVar8;
        local_4b = uVar3;
        local_49 = param_4;
        FUN_0214d3b0(iVar1,&local_4c,0);
        FUN_02150a20(iVar1,uVar9,7,uVar2 & 0xff,0);
      }
    }
  }
  return;
}

