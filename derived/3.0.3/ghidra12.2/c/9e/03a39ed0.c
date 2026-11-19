
void FUN_03a39ed0(long param_1,uint param_2,long *param_3)

{
  size_t __size;
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  
  lVar5 = DAT_05ae7600;
  if (0 < (int)param_2) {
    __size = (ulong)param_2 * 0x238 + 8;
    if (DAT_05ae7600 == 0) {
      puVar2 = malloc(__size);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar1 != 0) {
          param_3 = (long *)(lVar1 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_03a3a068;
      }
      puVar2 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
    }
    if (puVar2 != (ulong *)0x0) {
      puVar4 = puVar2 + 1;
      *puVar2 = (ulong)param_2;
      lVar5 = 0;
      do {
        FUN_0390cee0((long)puVar2 + lVar5 + 0x10);
        lVar1 = lVar5 + 0x238;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x150) = 0;
        *(undefined4 *)((long)puVar2 + lVar5 + 0x1b0) = 0xffffffff;
        *(undefined4 *)((long)puVar2 + lVar5 + 0x1f8) = 0x10000;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x100) = 0;
        *(undefined1 **)((long)puVar2 + lVar5 + 0x108) = &DAT_3f8000003f800000;
        *(undefined ***)((long)puVar2 + lVar5 + 0xf0) = &PTR_FUN_04b65d70;
        *(undefined1 **)((long)puVar2 + lVar5 + 0xf8) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x110) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x118) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x120) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x128) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x130) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x138) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x140) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x148) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x160) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x168) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x170) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x178) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x180) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x188) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 400) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x198) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1a0) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1a8) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1b8) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1c0) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1c8) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1d0) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1d8) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1e0) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x1e8) = 0;
        *(char **)((long)puVar2 + lVar5 + 0x1f0) = "agl::TextureData";
        *(undefined4 *)((long)puVar2 + lVar5 + 0x210) = 0xff;
        *(undefined4 *)((long)puVar2 + lVar5 + 0x214) = 0;
        *(undefined ***)((long)puVar2 + lVar5 + 0x158) = &PTR_LAB_04b65dc0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x218) = 0x80000000000;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x220) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x228) = 0;
        *(undefined8 *)((long)puVar2 + lVar5 + 0x230) = 0;
        *(undefined1 *)((long)puVar2 + lVar5 + 0x23a) = 0;
        lVar5 = lVar1;
      } while ((ulong)param_2 * 0x238 != lVar1);
      *(uint *)(param_1 + 8) = param_2;
      *(ulong **)(param_1 + 0x10) = puVar4;
      goto joined_r0x03a3a070;
    }
  }
LAB_03a3a068:
  param_2 = *(uint *)(param_1 + 8);
  puVar4 = *(ulong **)(param_1 + 0x10);
joined_r0x03a3a070:
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      puVar2 = puVar4 + (long)(int)uVar3 * 0x47;
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 0x46) = 0xff00;
      puVar2[0x21] = (ulong)(puVar2 + 0x2a);
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
  }
  return;
}

