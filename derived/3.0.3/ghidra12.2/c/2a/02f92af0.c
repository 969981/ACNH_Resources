
void FUN_02f92af0(long param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined *local_90;
  undefined4 local_88;
  
  puVar9 = PTR_DAT_04bc4d98;
  puVar8 = PTR_DAT_04bc4d90;
  if (0 < *(int *)(param_1 + 0x2f8)) {
    uVar16 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    do {
      if ((long)uVar16 < (long)(int)*(uint *)(param_1 + 0x208) &&
          uVar16 < *(uint *)(param_1 + 0x208)) {
        puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x210) + uVar16 * 8);
      }
      else {
        puVar14 = (undefined8 *)0x0;
      }
      if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
        *(undefined **)puVar8 = puVar1;
        __cxa_guard_release(puVar9);
      }
      if ((puVar14 != (undefined8 *)0x0) &&
         (uVar11 = (**(code **)*puVar14)(puVar14,puVar8), (uVar11 & 1) != 0)) {
        iVar10 = *(int *)(param_1 + 0x2e8);
        iVar6 = 0;
        if (iVar10 != 0) {
          iVar6 = (int)uVar16 / iVar10;
        }
        iVar7 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
        iVar13 = iVar7 + iVar6;
        if ((*(byte *)(param_1 + 1000) >> 1 & 1) != 0) {
          uVar4 = *(uint *)(param_1 + 0x434);
          uVar3 = 0;
          if ((int)uVar4 < iVar7) {
            uVar3 = ~uVar4;
          }
          if (iVar7 < 0) {
            uVar3 = uVar4 + 1;
          }
          iVar13 = iVar13 + uVar3;
          iVar5 = *(int *)(param_1 + 0x3d0);
          iVar7 = 0;
          if (iVar5 <= iVar13) {
            iVar7 = iVar5;
          }
          if (-1 < iVar13) {
            iVar5 = -iVar7;
          }
          iVar13 = iVar5 + iVar13;
        }
        uVar3 = ((int)uVar16 - iVar6 * iVar10) + iVar13 * iVar10;
        bVar12 = *(byte *)((long)puVar14 + 0x2c2);
        if (*(int *)(param_1 + 0x3cc) <= (int)uVar3 || 0x7fffffff < uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 == param_3) || ((param_2 & 1) != 0)) {
          if ((*(byte *)((long)puVar14 + 0x2c3) & 1) == 0) {
            bVar12 = bVar12 | 1;
          }
          else {
            bVar12 = bVar12 & 0xfd;
          }
        }
        else if ((*(byte *)((long)puVar14 + 0x2c3) & 1) == 0) {
          bVar12 = bVar12 & 0xfe;
        }
        else {
          bVar12 = bVar12 | 2;
        }
        *(byte *)((long)puVar14 + 0x2c2) = bVar12;
        plVar15 = *(long **)puVar14[0x5e];
        if (plVar15 != (long *)0x0) {
          local_88 = 0x14;
          uVar17 = 0x3f800000;
          if (uVar3 != param_3) {
            uVar17 = 0;
          }
          local_90 = puVar2;
          (**(code **)(*plVar15 + 0x18))(plVar15,&local_90);
          (**(code **)(plVar15[3] + 0x158))(uVar17,plVar15[1]);
        }
      }
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)*(int *)(param_1 + 0x2f8));
  }
  return;
}

