
void FUN_012f10d0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong __size;
  ulong uVar9;
  
  lVar4 = DAT_05ae7600;
  uVar2 = *(uint *)(param_2 + 1);
  uVar9 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    __size = uVar9 << 5 | 8;
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar4 + 8);
        if (lVar5 != 0) {
          param_2 = (long *)(lVar5 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_012f11f8;
      }
      puVar6 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6 + 1;
      *puVar6 = uVar9;
      puVar3 = PTR_DAT_04bb2018;
      puVar8 = puVar7;
      if ((uVar2 & 1) != 0) {
        puVar1 = PTR_DAT_04bb2018 + 0x10;
        *(undefined1 *)((long)puVar6 + 0x24) = 0;
        puVar6[1] = (ulong)puVar1;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 3) = 0xffff;
        puVar8 = puVar6 + 5;
        *(undefined8 *)((long)puVar6 + 0x1c) = 0xffff0000;
      }
      if ((uVar9 - 1 & 0x7ffffffffffffff) != 0) {
        do {
          *puVar8 = (ulong)(puVar3 + 0x10);
          puVar8[1] = 0;
          *(undefined8 *)((long)puVar8 + 0x14) = 0xffff0000;
          *(undefined4 *)(puVar8 + 2) = 0xffff;
          *(undefined1 *)((long)puVar8 + 0x1c) = 0;
          *(undefined8 *)((long)puVar8 + 0x34) = 0xffff0000;
          *(undefined4 *)(puVar8 + 6) = 0xffff;
          *(undefined1 *)((long)puVar8 + 0x3c) = 0;
          puVar8[4] = (ulong)(puVar3 + 0x10);
          puVar8[5] = 0;
          puVar8 = puVar8 + 8;
        } while (puVar8 != puVar7 + uVar9 * 4);
      }
      *(ulong **)(param_1 + 8) = puVar7;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(uint *)(param_1 + 0x10) = uVar2;
    }
  }
LAB_012f11f8:
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

