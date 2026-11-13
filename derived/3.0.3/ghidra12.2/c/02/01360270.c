
void FUN_01360270(long param_1,long *param_2)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_88 [12];
  int local_7c;
  
  memset((void *)(param_1 + 0x30),0xff,0x48000);
  puVar11 = (undefined8 *)(param_1 + 0x10);
  plVar8 = (long *)(**(code **)*puVar11)(puVar11);
  iVar6 = (**(code **)(*plVar8 + 0x18))();
  if (0 < iVar6) {
    iVar13 = 0;
    do {
      FUN_01360490(auStack_88,param_1,iVar13);
      if (local_7c != 0) {
        FUN_013606b0(param_1,iVar13,auStack_88);
      }
      iVar13 = iVar13 + 1;
    } while (iVar6 != iVar13);
  }
  plVar8 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x10))(puVar11);
  uVar7 = (**(code **)(*plVar8 + 0x18))();
  if (0 < (int)uVar7) {
    __size = (ulong)uVar7 * 0x718 + 8;
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar10 = malloc(__size);
      puVar2 = PTR_DAT_04bb2010;
      puVar1 = PTR_DAT_04bbc1a0;
      puVar4 = PTR_DAT_04bbc5d8;
      puVar5 = PTR_DAT_04bc4568;
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar11 = (undefined8 *)(lVar14 + 8);
        if (lVar9 != 0) {
          puVar11 = (undefined8 *)(lVar9 + 0xa8);
        }
        param_2 = (long *)*puVar11;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      puVar10 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
      puVar2 = PTR_DAT_04bb2010;
      puVar1 = PTR_DAT_04bbc1a0;
      puVar4 = PTR_DAT_04bbc5d8;
      puVar5 = PTR_DAT_04bc4568;
    }
    PTR_DAT_04bb2010 = puVar2;
    PTR_DAT_04bbc1a0 = puVar1;
    PTR_DAT_04bbc5d8 = puVar4;
    PTR_DAT_04bc4568 = puVar5;
    if (puVar10 != (ulong *)0x0) {
      puVar12 = puVar10 + 1;
      *puVar10 = (ulong)uVar7;
      puVar1 = puVar1 + 0x10;
      puVar2 = puVar2 + 0x10;
      puVar3 = PTR_DAT_04bb2018 + 0x10;
      puVar10 = puVar12;
      do {
        *puVar10 = (ulong)(puVar5 + 0x10);
        puVar10[1] = 0;
        *(undefined4 *)(puVar10 + 2) = 0;
        puVar10[3] = (ulong)puVar1;
        puVar10[4] = (ulong)puVar2;
        puVar10[5] = 0;
        puVar10[6] = (ulong)puVar2;
        puVar10[7] = 0;
        puVar10[8] = (ulong)(puVar4 + 0x10);
        puVar10[9] = (ulong)puVar3;
        puVar10[10] = 0;
        puVar10[0xb] = (ulong)puVar3;
        puVar10[0xc] = 0;
        puVar10[0xd] = (ulong)puVar1;
        puVar10[0xe] = (ulong)puVar2;
        puVar10[0xf] = 0;
        puVar10[0x10] = (ulong)puVar2;
        puVar10[0x11] = 0;
        puVar10[0x12] = (ulong)puVar1;
        puVar10[0x13] = (ulong)puVar2;
        puVar10[0x14] = 0;
        puVar10[0x15] = (ulong)puVar2;
        puVar10[0x16] = 0;
        FUN_02ad636c(puVar10 + 0x17);
        puVar10 = puVar10 + 0xe3;
      } while (puVar10 != puVar12 + (ulong)uVar7 * 0xe3);
      *(uint *)(param_1 + 0x48030) = uVar7;
      *(ulong **)(param_1 + 0x48038) = puVar12;
    }
  }
  return;
}

