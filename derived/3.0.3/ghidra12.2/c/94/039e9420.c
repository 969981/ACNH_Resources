
void FUN_039e9420(long *param_1,uint param_2,undefined4 param_3,long *param_4)

{
  size_t __size;
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  
  if (0 < (int)param_2) {
    uVar9 = (ulong)param_2;
    __size = (ulong)param_2 * 0x38 + 8;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_039e95a4;
      }
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      puVar10 = puVar6 + 1;
      *puVar6 = uVar9;
      puVar1 = PTR_DAT_04bb2020;
      uVar8 = uVar9 * 0x38 - 0x38;
      puVar7 = puVar10;
      if ((uVar8 / 0x38 & 1) == 0) {
        *(undefined1 *)(puVar6 + 4) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[1] = (ulong)&PTR_LAB_04b6b908;
        puVar6[5] = (ulong)(puVar1 + 0x10);
        puVar6[6] = (ulong)"Proc(unnamed)";
        *(undefined4 *)(puVar6 + 7) = 1;
        puVar7 = puVar6 + 8;
      }
      if (0x37 < uVar8) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          *(undefined1 *)(puVar7 + 3) = 0;
          *puVar7 = (ulong)&PTR_LAB_04b6b908;
          *(undefined4 *)(puVar7 + 6) = 1;
          *(undefined1 *)(puVar7 + 10) = 0;
          puVar7[7] = (ulong)&PTR_LAB_04b6b908;
          *(undefined4 *)(puVar7 + 0xd) = 1;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[4] = (ulong)puVar1;
          puVar7[5] = (ulong)"Proc(unnamed)";
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[0xb] = (ulong)puVar1;
          puVar7[0xc] = (ulong)"Proc(unnamed)";
          puVar7 = puVar7 + 0xe;
        } while (puVar7 != puVar10 + uVar9 * 7);
      }
      *(uint *)(param_1 + 0x1b) = param_2;
      param_1[0x1c] = (long)puVar10;
      *(undefined4 *)(param_1 + 0x1a) = param_3;
      goto joined_r0x039e95b0;
    }
  }
LAB_039e95a4:
  param_2 = *(uint *)(param_1 + 0x1b);
  puVar10 = (ulong *)param_1[0x1c];
  *(undefined4 *)(param_1 + 0x1a) = param_3;
joined_r0x039e95b0:
  if (param_2 != 0) {
    uVar9 = 0;
    uVar8 = 0;
    do {
      (**(code **)(puVar10[(long)(int)uVar8 * 7] + 0x10))
                (puVar10 + (long)(int)uVar8 * 7,param_1,uVar9,param_4);
      uVar9 = uVar8 + 1;
      uVar8 = uVar9 & 0xffffffff;
    } while (param_2 != (uint)uVar9);
  }
  FUN_03ad4444(param_1,param_4);
  bVar2 = *(byte *)(param_1 + 0x16);
  iVar3 = (**(code **)(*param_1 + 0x218))(param_1);
  if (0 < iVar3) {
    lVar4 = 0;
    lVar11 = (ulong)bVar2 * 4 + 0x10;
    do {
      lVar4 = lVar4 + 1;
      *(undefined4 *)(param_1[9] + lVar11) = 0xbf800000;
      iVar3 = (**(code **)(*param_1 + 0x218))(param_1);
      lVar11 = lVar11 + 0x58;
    } while (lVar4 < iVar3);
  }
  *(undefined2 *)((long)param_1 + 0xb4) = 1000;
  return;
}

