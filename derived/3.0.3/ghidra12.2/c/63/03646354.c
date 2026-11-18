
void FUN_03646354(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined1 param_10)

{
  bool bVar1;
  void *__s;
  int iVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(undefined8 *)(param_1 + 0xf2e8) = param_4;
  *(undefined8 *)(param_1 + 0xf2f0) = param_5;
  __s = (void *)(**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                          (*(long **)PTR_DAT_04bdf328,0xf000,0x10);
  *(void **)(param_1 + 0x1a0) = __s;
  if (__s == (void *)0x0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    __s = *(void **)(param_1 + 0x1a0);
  }
  bVar1 = param_6 == 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  iVar2 = 0xef;
  if (bVar1) {
    iVar2 = 0xf0;
  }
  *(bool *)param_1 = bVar1;
  iVar3 = 0x14;
  if (!bVar1) {
    iVar3 = 0x46;
  }
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(int *)(param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  *(int *)(param_1 + 0x14) = iVar2 + 1 + iVar3;
  *(int *)(param_1 + 0x18) = iVar2;
  iVar2 = iVar2 + iVar3 + 2;
  *(undefined4 *)(param_1 + 0x39) = 0x1000000;
  *(short *)(param_1 + 0x28) = (short)iVar2;
  iVar2 = iVar2 * 0x155;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 100) = iVar2;
  *(undefined2 *)(param_1 + 0x80) = 0x100;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  memset(__s,0,0xf000);
  *(undefined1 *)(param_1 + 0xf2f8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 7;
  *(undefined8 *)(param_1 + 0xf310) = 0;
  *(undefined8 *)(param_1 + 0xf318) = 0;
  *(undefined1 *)(param_1 + 0xf320) = 0;
  *(undefined4 *)(param_1 + 0xf338) = 0;
  *(undefined4 *)(param_1 + 0xf2fc) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0xf2c4) = 0;
  *(undefined8 *)(param_1 + 0xf328) = 0;
  *(undefined8 *)(param_1 + 0xf330) = 0;
  *(int *)(param_1 + 0xf33c) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x18) * 0x155;
  *(undefined1 *)(param_1 + 0xf29c) = 0xff;
  memset((void *)(param_1 + 0x1a8),0,0xf0f4);
  *(undefined1 *)(param_1 + 0xf340) = param_7;
  *(undefined1 *)(param_1 + 0xf341) = param_8;
  *(undefined1 *)(param_1 + 0xf342) = param_9;
  *(undefined1 *)(param_1 + 0xf343) = param_10;
  return;
}

