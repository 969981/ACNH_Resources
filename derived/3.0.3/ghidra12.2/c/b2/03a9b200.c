
void FUN_03a9b200(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  size_t __size;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  
  lVar6 = DAT_05ae7600;
  if (0 < (int)param_2) {
    __size = (ulong)param_2 * 0x118 + 8;
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(__size);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar6 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_03a9b2d8;
      }
      puVar3 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
    }
    if (puVar3 != (ulong *)0x0) {
      lVar6 = (ulong)param_2 * 0x118;
      puVar5 = puVar3 + 1;
      *puVar3 = (ulong)param_2;
      puVar3 = puVar5;
      do {
        FUN_0390cee0(puVar3);
        puVar3 = puVar3 + 0x23;
        lVar6 = lVar6 + -0x118;
      } while (lVar6 != 0);
      *(uint *)(param_1 + 8) = param_2;
      *(ulong **)(param_1 + 0x10) = puVar5;
      goto joined_r0x03a9b2e0;
    }
  }
LAB_03a9b2d8:
  param_2 = *(uint *)(param_1 + 8);
  puVar5 = *(ulong **)(param_1 + 0x10);
joined_r0x03a9b2e0:
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined4 *)(puVar5 + (long)(int)uVar4 * 0x23 + 0x20) = 0;
      puVar5[(long)(int)uVar4 * 0x23 + 0x1e] = 0;
      puVar5[(long)(int)uVar4 * 0x23 + 0x1f] = 0;
      *(undefined4 *)((long)puVar5 + (long)(int)uVar4 * 0x118 + 0x114) = 0;
      *(undefined1 **)((long)puVar5 + (long)(int)uVar4 * 0x118 + 0x104) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)puVar5 + (long)(int)uVar4 * 0x118 + 0x10c) = 0;
      uVar1 = uVar4 + 1;
      puVar5[(long)(int)uVar4 * 0x23 + 0x1c] = 0;
      puVar5[(long)(int)uVar4 * 0x23 + 0x1d] = 0;
      uVar4 = uVar1;
    } while (param_2 != uVar1);
  }
  return;
}

