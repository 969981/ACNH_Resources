
void FUN_03d48850(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar3) {
    uVar1 = 0;
    do {
      if ((uVar1 < uVar3) && (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + uVar1 * 8), lVar2 != 0))
      {
        *(undefined8 *)(lVar2 + 0x18) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x20) = 0xfffffffefffffffe;
        *(undefined4 *)(lVar2 + 0x98) = 0xfffffffe;
        *(undefined8 *)(lVar2 + 0x28) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x30) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x38) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x40) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x48) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x50) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x58) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x60) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x68) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x70) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x78) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x80) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x88) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x90) = 0xfffffffefffffffe;
        *(undefined8 *)(lVar2 + 0x9c) = 0;
        *(undefined8 *)(lVar2 + 0x114) = 0;
        *(undefined8 *)(lVar2 + 0x11c) = 0;
        *(undefined8 *)(lVar2 + 0x104) = 0;
        *(undefined8 *)(lVar2 + 0x10c) = 0;
        *(undefined8 *)(lVar2 + 0xf4) = 0;
        *(undefined8 *)(lVar2 + 0xfc) = 0;
        *(undefined8 *)(lVar2 + 0xe4) = 0;
        *(undefined8 *)(lVar2 + 0xec) = 0;
        *(undefined8 *)(lVar2 + 0xd4) = 0;
        *(undefined8 *)(lVar2 + 0xdc) = 0;
        *(undefined8 *)(lVar2 + 0xc4) = 0;
        *(undefined8 *)(lVar2 + 0xcc) = 0;
        *(undefined8 *)(lVar2 + 0xb4) = 0;
        *(undefined8 *)(lVar2 + 0xbc) = 0;
        *(undefined8 *)(lVar2 + 0xa4) = 0;
        *(undefined8 *)(lVar2 + 0xac) = 0;
        uVar3 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = uVar1 + 1;
    } while ((long)uVar1 < (long)(int)uVar3);
  }
  return;
}

