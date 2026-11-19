
void FUN_03bc1e20(long *param_1,undefined4 param_2,long param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  lVar2 = DAT_05ae7600;
  if ((char)param_1[3] != '\0') {
    return;
  }
  uVar1 = *(uint *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20) + 0x14);
  if (0 < (int)uVar1) {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc((ulong)uVar1 * 0x98);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_4 = (long *)(lVar2 + 8);
        if (lVar3 != 0) {
          param_4 = (long *)(lVar3 + 0xa8);
        }
        param_4 = (long *)*param_4;
        if (param_4 == (long *)0x0) goto LAB_03bc1f54;
      }
      puVar4 = (undefined1 *)(**(code **)(*param_4 + 0x30))(param_4,(ulong)uVar1 * 0x98,8);
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = puVar4;
      do {
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 4) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0xc) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x14) = 0x3f80000000000000;
        *(undefined8 *)(puVar5 + 0x2c) = 0;
        *(undefined8 *)(puVar5 + 0x34) = 0;
        *(undefined8 *)(puVar5 + 0x3c) = 0;
        *(undefined8 *)(puVar5 + 0x44) = 0;
        *(undefined8 *)(puVar5 + 0x4c) = 0;
        *(undefined8 *)(puVar5 + 0x54) = 0;
        *(undefined8 *)(puVar5 + 0x5c) = 0;
        *(undefined8 *)(puVar5 + 100) = 0;
        *(undefined8 *)(puVar5 + 0x6c) = 0;
        *(undefined8 *)(puVar5 + 0x74) = 0;
        *(undefined8 *)(puVar5 + 0x7c) = 0;
        *(undefined8 *)(puVar5 + 0x84) = 0;
        *(undefined4 *)(puVar5 + 0x8c) = 0;
        *(undefined8 *)(puVar5 + 0x90) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x1c) = 0;
        *(undefined8 *)(puVar5 + 0x24) = 0;
        puVar5 = puVar5 + 0x98;
      } while (puVar5 != puVar4 + (ulong)uVar1 * 0x98);
      *(uint *)(param_1 + 0x10) = uVar1;
      param_1[0x11] = (long)puVar4;
    }
  }
LAB_03bc1f54:
  param_1[0xe] = param_3;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = param_2;
  (**(code **)(*param_1 + 0x30))(param_1);
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

