
void FUN_031050d0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  uint uVar12;
  ulong __size;
  ulong uVar13;
  long lVar14;
  undefined *local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bc0cb8;
  plVar11 = *(long **)(param_1 + 0x210);
  if (plVar11 == (long *)0x0) {
    return;
  }
  local_60 = PTR_DAT_04bc0cb8 + 0x10;
  local_58 = 0x1e;
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_60);
  uVar5 = (**(code **)(plVar11[3] + 0x200))(plVar11[1],0);
  if (0 < (int)uVar5) {
    uVar13 = (ulong)uVar5;
    __size = uVar13 << 5 | 8;
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar8 = malloc(__size);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar14 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_0310522c;
      puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
    }
    if (puVar8 != (ulong *)0x0) {
      puVar9 = puVar8 + 1;
      *puVar8 = uVar13;
      puVar4 = PTR_DAT_04bc8e10;
      puVar10 = puVar9;
      if ((uVar5 & 1) != 0) {
        puVar1 = PTR_DAT_04bc8e10 + 0x10;
        *(undefined4 *)(puVar8 + 3) = 0;
        *(undefined4 *)(puVar8 + 4) = 0;
        puVar8[1] = (ulong)puVar1;
        puVar8[2] = 0xffffffffffffffff;
        puVar10 = puVar8 + 5;
      }
      if ((uVar13 - 1 & 0x7ffffffffffffff) != 0) {
        do {
          *puVar10 = (ulong)(puVar4 + 0x10);
          puVar10[1] = 0xffffffffffffffff;
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined4 *)(puVar10 + 7) = 0;
          puVar10[4] = (ulong)(puVar4 + 0x10);
          puVar10[5] = 0xffffffffffffffff;
          puVar10 = puVar10 + 8;
        } while (puVar10 != puVar9 + uVar13 * 4);
      }
      *(uint *)(param_1 + 0x240) = uVar5;
      *(ulong **)(param_1 + 0x248) = puVar9;
    }
  }
LAB_0310522c:
  uVar5 = *(uint *)(param_1 + 0x240);
  if (0 < (int)uVar5) {
    uVar12 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x248);
      uVar2 = uVar12;
      if (uVar5 <= uVar12) {
        uVar2 = 0;
      }
      local_58 = 0x1f;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x210))(lVar14 + (ulong)uVar2 * 0x20,plVar11[1],0,uVar12);
      uVar5 = *(uint *)(param_1 + 0x240);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar5);
  }
  return;
}

