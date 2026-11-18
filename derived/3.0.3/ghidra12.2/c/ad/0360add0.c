
/* WARNING: Removing unreachable block (ram,0x0360aebc) */
/* WARNING: Removing unreachable block (ram,0x0360aec4) */
/* WARNING: Removing unreachable block (ram,0x0360aec8) */
/* WARNING: Removing unreachable block (ram,0x0360af24) */
/* WARNING: Removing unreachable block (ram,0x0360af30) */
/* WARNING: Removing unreachable block (ram,0x0360af38) */

void FUN_0360add0(long param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  short sVar13;
  
  *(undefined2 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x42c) = 0;
  *(undefined1 *)(param_1 + 0x4fa) = 0;
  *(undefined2 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x434) = 0;
  *(undefined2 *)(param_1 + 0x436) = 0;
  *(undefined1 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x43a) = 0;
  *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) & 0xfe;
  *(undefined8 *)(param_1 + 0x43b) = 0;
  *(undefined2 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x442) = 0;
  *(undefined8 *)(param_1 + 0x464) = 0;
  *(undefined2 *)(param_1 + 0x446) = 0x80;
  *(undefined2 *)(param_1 + 0x47e) = 0x80;
  *(undefined1 *)(param_1 + 0x44c) = 1;
  *(undefined1 *)(param_1 + 0x484) = 1;
  *(undefined2 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x46c) = 0;
  *(undefined2 *)(param_1 + 0x46e) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x472) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined2 *)(param_1 + 0x488) = 0;
  *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) & 0xfd;
  *(undefined8 *)(param_1 + 0x473) = 0;
  *(undefined2 *)(param_1 + 0x4fe) = 0;
  *(undefined4 *)(param_1 + 0x47a) = 0;
  *(undefined8 *)(param_1 + 0x49c) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x4a4) = 0;
  *(undefined2 *)(param_1 + 0x4a6) = 0;
  *(undefined1 *)(param_1 + 0x498) = 0;
  *(undefined1 *)(param_1 + 0x4aa) = 0;
  *(undefined2 *)(param_1 + 0x4be) = 0;
  *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) & 0xfb;
  *(undefined2 *)(param_1 + 0x4ab) = 0;
  *(undefined2 *)(param_1 + 0x500) = 0;
  *(undefined1 *)(param_1 + 0x4bd) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4dc) = 0x800000000;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  *(undefined2 *)(param_1 + 0x4c8) = 0;
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  *(undefined2 *)(param_1 + 0x4e6) = 0;
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  *(undefined1 *)(param_1 + 0x4ea) = 0;
  *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) & 0xf7;
  *(undefined8 *)(param_1 + 0x4eb) = 0;
  *(undefined2 *)(param_1 + 0x4f3) = 0;
  *(undefined2 *)(param_1 + 0x502) = 0;
  FUN_0360ddc0(param_1,1);
  *(undefined4 *)(param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0x1068) = 0;
  *(undefined1 *)(param_1 + 0x106c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x14a8) + 0x200) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x14c0));
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x14c0));
  if (*(long *)(param_1 + 0x530) != 0) {
    uVar6 = 0;
    do {
      *(undefined2 *)(*(long *)(param_1 + 0x528) + uVar6 * 2) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulong *)(param_1 + 0x530));
  }
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  *(undefined1 *)(param_1 + 0x954) = 1;
  *(undefined8 *)(param_1 + 0x960) = 0;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined8 *)(param_1 + 0xdc0) = 0;
  *(undefined8 *)(param_1 + 0xdc8) = 0;
  *(undefined8 *)(param_1 + 0xdd0) = 0;
  *(undefined8 *)(param_1 + 0xdd8) = 0;
  *(undefined8 *)(param_1 + 0xde0) = 0;
  *(undefined8 *)(param_1 + 0xde8) = 0;
  *(undefined8 *)(param_1 + 0xdf0) = 0;
  *(undefined8 *)(param_1 + 0xdf8) = 0;
  *(undefined1 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x498) = 0;
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x404) = 0;
  *(undefined8 *)(param_1 + 0x40c) = 0;
  if (*(char *)(param_1 + -0x102c) == '\0') {
    uVar9 = 0x5fbff34;
    if (*(char *)(param_1 + -0x102e) == '\x03') {
      *(undefined2 *)(param_1 + 0x4f8) = 0xf377;
      *(undefined2 *)(param_1 + 0x418) = 0x101;
      *(undefined1 *)(param_1 + 0x4fa) = 0x80;
      if ((*(byte *)(param_1 + -0x23d) >> 2 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x444) = 0x206;
        *(undefined1 *)(param_1 + 0x44c) = 0;
        *(undefined8 *)(param_1 + 0x42c) = 0x7c10000008c;
        *(undefined2 *)(param_1 + 0x436) = 0x40;
        *(undefined2 *)(param_1 + 0x43b) = 0x303;
        *(undefined1 *)(param_1 + 0x440) = 0xf3;
        *(undefined1 *)(param_1 + 0x442) = 7;
      }
      else {
        *(undefined2 *)(param_1 + 0x444) = 0x206;
        *(undefined1 *)(param_1 + 0x44c) = 0;
        *(undefined8 *)(param_1 + 0x42c) = 0x7c10000009c;
        *(undefined2 *)(param_1 + 0x436) = 0x40;
        *(undefined1 *)(param_1 + 0x428) = 1;
        *(undefined1 *)(param_1 + 0x460) = 1;
        *(undefined2 *)(param_1 + 0x43b) = 0x303;
        *(undefined1 *)(param_1 + 0x440) = 0xf3;
        *(undefined1 *)(param_1 + 0x498) = 1;
        *(undefined1 *)(param_1 + 0x442) = 7;
        *(undefined1 *)(param_1 + 0x4d8) = 1;
      }
      lVar12 = 6;
      *(undefined2 *)(param_1 + 0x448) = 0x7c1;
    }
    else {
      *(undefined2 *)(param_1 + 0x418) = 0x101;
      *(undefined2 *)(param_1 + 0x4f8) = 0xf377;
      *(undefined8 *)(param_1 + 0x42c) = 0x7c100000010;
      *(undefined1 *)(param_1 + 0x4fa) = 0x80;
      uVar9 = 0x5fbf99a;
      *(undefined2 *)(param_1 + 0x444) = 0x202;
      *(undefined2 *)(param_1 + 0x43b) = 0x303;
      *(undefined1 *)(param_1 + 0x440) = 0xf3;
      *(undefined1 *)(param_1 + 0x442) = 5;
      *(undefined2 *)(param_1 + 0x436) = 0x40;
      *(undefined2 *)(param_1 + 0x448) = 0x7c1;
      lVar12 = 2;
      *(undefined1 *)(param_1 + 0x428) = 1;
      *(undefined1 *)(param_1 + 0x44c) = 0;
      *(undefined1 *)(param_1 + 0x460) = 1;
      *(undefined1 *)(param_1 + 0x498) = 1;
      *(undefined1 *)(param_1 + 0x4d8) = 1;
    }
    *(undefined4 *)(param_1 + 0x540) = uVar9;
    bVar4 = false;
    *(undefined4 *)(param_1 + 0x544) = uVar9;
    *(undefined1 *)(param_1 + 0x446) = 0xe1;
    uVar11 = 0xe1U >> lVar12 & 1;
    *(char *)(param_1 + 0x447) = (char)uVar11;
    sVar13 = 0x17f;
    if (uVar11 != 0) {
      sVar13 = *(short *)(param_1 + 0x44a) + 0x17f;
    }
    if (*(char *)(param_1 + 0x43a) != '\0') {
      sVar13 = 0x17f;
    }
    *(short *)(param_1 + 0x4fc) = sVar13;
    if ((*(char *)(param_1 + 0x419) != '\0') && (*(char *)(param_1 + 0x418) != '\0')) {
      bVar4 = *(int *)(param_1 + 0x42c) != 0;
    }
    sVar13 = *(short *)(&DAT_04057c80 + (ulong)*(byte *)(param_1 + 0x43e) * 2);
    *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) & 0xfe | bVar4;
    *(short *)(param_1 + 0x44a) = sVar13;
    uVar8 = (ushort)*(byte *)(param_1 + 0x419);
    if (((*(byte *)(param_1 + 0x419) != 0) && (uVar8 = 0x17f, *(char *)(param_1 + 0x418) != '\0'))
       && (*(char *)(param_1 + 0x43a) == '\0')) {
      uVar8 = 0x17f;
      if (*(char *)(param_1 + 0x447) != '\0') {
        uVar8 = sVar13 + 0x17f;
      }
    }
    *(ushort *)(param_1 + 0x4fc) = uVar8;
    bVar2 = *(byte *)(param_1 + 0x4f9);
    uVar8 = (*(byte *)(param_1 + 0x4f8) >> 4 & 7) + 1;
    uVar1 = (*(byte *)(param_1 + 0x4f8) & 7) + 1;
    *(ushort *)(param_1 + 0x50c) = -(bVar2 & 1) & uVar1;
    uVar11 = (uint)bVar2;
    *(ushort *)(param_1 + 0x504) = uVar8 & (ushort)((int)((uint)bVar2 << 0x1b) >> 0x1f);
    *(ushort *)(param_1 + 0x50e) = uVar1 & (ushort)((int)(uVar11 << 0x1e) >> 0x1f);
    *(ushort *)(param_1 + 0x506) = uVar8 & (ushort)((int)(uVar11 << 0x1a) >> 0x1f);
    *(ushort *)(param_1 + 0x508) = uVar8 & (ushort)((int)(uVar11 << 0x19) >> 0x1f);
    *(ushort *)(param_1 + 0x50a) = uVar8 & (ushort)((uint)(int)(char)bVar2 >> 7);
    *(ushort *)(param_1 + 0x510) = uVar1 & (ushort)((int)((uint)bVar2 << 0x1d) >> 0x1f);
    *(ushort *)(param_1 + 0x512) = uVar1 & (ushort)((int)((uint)bVar2 << 0x1c) >> 0x1f);
  }
  if (*(char *)(param_1 + -0x102d) == '\x01') {
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4ad) = 0x12;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360b5b4;
      }
LAB_0360b550:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360b5dc;
LAB_0360b5c0:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360b5dc;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x96;
        if (*(char *)(param_1 + 0x489) != '\0') goto LAB_0360b614;
        goto LAB_0360b658;
      }
      if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360b658;
LAB_0360b614:
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (uVar10 != 0) goto LAB_0360b628;
LAB_0360b678:
        sVar13 = 0x186;
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (*(byte *)(param_1 + 0x4be) == 0) goto LAB_0360b678;
LAB_0360b628:
        sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                        (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
LAB_0360b67c:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360b6f8;
LAB_0360b688:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360b6f8;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x52;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360b7d4;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360b7d4:
            uVar8 = 0x186;
            goto LAB_0360b710;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x12;
        cVar3 = *(char *)(param_1 + 0x489);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x489);
      }
      if (cVar3 == '\0') goto LAB_0360b550;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (uVar10 == 0) goto LAB_0360b5b0;
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360b5b0:
          sVar13 = 0x186;
          goto LAB_0360b5b4;
        }
      }
      sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                      (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
LAB_0360b5b4:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360b5c0;
LAB_0360b5dc:
      *(undefined1 *)(param_1 + 0x4ae) = 0x96;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360b67c;
      }
LAB_0360b658:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360b688;
LAB_0360b6f8:
      *(undefined1 *)(param_1 + 0x4af) = 0x52;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
LAB_0360b710:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4b0) = 0x1e;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360b7f0;
      }
LAB_0360b7b4:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360b86c;
LAB_0360b7fc:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360b86c;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xd0;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360b9ec;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360b9ec:
            uVar8 = 0x186;
            goto LAB_0360b884;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x1e;
        cVar3 = *(char *)(param_1 + 0x489);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x489);
      }
      if (cVar3 == '\0') goto LAB_0360b7b4;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (uVar10 == 0) goto LAB_0360b7ec;
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360b7ec:
          sVar13 = 0x186;
          goto LAB_0360b7f0;
        }
      }
      sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                      (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
LAB_0360b7f0:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360b7fc;
LAB_0360b86c:
      *(undefined1 *)(param_1 + 0x4b1) = 0xd0;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
LAB_0360b884:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4b2) = 0xeb;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xeb;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360ba04;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360ba04:
            uVar8 = 0x186;
            goto LAB_0360b918;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
LAB_0360b918:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4b3) = 0x87;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360ba10;
      }
LAB_0360b9c8:
      *(undefined2 *)(param_1 + 0x500) = 0;
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360ba8c;
LAB_0360ba1c:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360ba8c;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xfc;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360bb68;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360bb68:
            uVar8 = 0x186;
            goto LAB_0360baa4;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x87;
        cVar3 = *(char *)(param_1 + 0x489);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x489);
      }
      if (cVar3 == '\0') goto LAB_0360b9c8;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
      }
      uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
      *(char *)(param_1 + 0x4bd) = (char)uVar11;
      if (*(byte *)(param_1 + 0x4be) == 0) {
        sVar13 = 0x186;
      }
      else {
        sVar13 = (short)(uVar11 >>
                        (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                 -0x34 + 0x186;
      }
LAB_0360ba10:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360ba1c;
LAB_0360ba8c:
      *(undefined1 *)(param_1 + 0x4b4) = 0xfc;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
LAB_0360baa4:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4b5) = 0xde;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360bb84;
      }
LAB_0360bb48:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360bbac;
LAB_0360bb90:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360bbac;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x75;
        if (*(char *)(param_1 + 0x489) != '\0') goto LAB_0360bbe4;
        goto LAB_0360bc28;
      }
      if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360bc28;
LAB_0360bbe4:
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (uVar10 != 0) goto LAB_0360bbf8;
LAB_0360bc48:
        sVar13 = 0x186;
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (*(byte *)(param_1 + 0x4be) == 0) goto LAB_0360bc48;
LAB_0360bbf8:
        sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                        (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
switchD_035e6abc_caseD_a6:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360bcc8;
LAB_0360bc58:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360bcc8;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xbb;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360bda4;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360bda4:
            uVar8 = 0x186;
            goto LAB_0360bce0;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xde;
        cVar3 = *(char *)(param_1 + 0x489);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x489);
      }
      if (cVar3 == '\0') goto LAB_0360bb48;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (uVar10 == 0) goto LAB_0360bb80;
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360bb80:
          sVar13 = 0x186;
          goto LAB_0360bb84;
        }
      }
      sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                      (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
LAB_0360bb84:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360bb90;
LAB_0360bbac:
      *(undefined1 *)(param_1 + 0x4b6) = 0x75;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto switchD_035e6abc_caseD_a6;
      }
LAB_0360bc28:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360bc58;
LAB_0360bcc8:
      *(undefined1 *)(param_1 + 0x4b7) = 0xbb;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
LAB_0360bce0:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4b8) = 0xe3;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360bdc0;
      }
LAB_0360bd84:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360be3c;
LAB_0360bdcc:
      if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360be3c;
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xb6;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360bfbc;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360bfbc:
            uVar8 = 0x186;
            goto LAB_0360be54;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xe3;
        cVar3 = *(char *)(param_1 + 0x489);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x489);
      }
      if (cVar3 == '\0') goto LAB_0360bd84;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (uVar10 == 0) goto LAB_0360bdbc;
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + 0x4be);
        if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360bdbc:
          sVar13 = 0x186;
          goto LAB_0360bdc0;
        }
      }
      sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                      (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
LAB_0360bdc0:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360bdcc;
LAB_0360be3c:
      *(undefined1 *)(param_1 + 0x4b9) = 0xb6;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
LAB_0360be54:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4ba) = 0x56;
      uVar8 = 0;
      if (*(char *)(param_1 + 0x489) != '\0') {
        uVar8 = 0x186;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x56;
      }
      uVar8 = (ushort)*(byte *)(param_1 + 0x489);
      if (*(byte *)(param_1 + 0x489) != 0) {
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (uVar10 == 0) goto LAB_0360bfd4;
        }
        else {
          uVar10 = (uint)*(byte *)(param_1 + 0x4be);
          if (*(byte *)(param_1 + 0x4be) == 0) {
LAB_0360bfd4:
            uVar8 = 0x186;
            goto LAB_0360bee8;
          }
        }
        uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> uVar11 & 0xf) >>
                       (ulong)(0x2104U >> (ulong)((uVar10 & 7) << 2) & 7)) * -0x34 + 0x186;
      }
    }
LAB_0360bee8:
    *(ushort *)(param_1 + 0x500) = uVar8;
    if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4bb) = 0x3c;
      if (*(char *)(param_1 + 0x489) != '\0') {
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        goto LAB_0360bfe0;
      }
LAB_0360bf98:
      *(undefined2 *)(param_1 + 0x500) = 0;
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      cVar3 = *(char *)(param_1 + 0x488);
    }
    else {
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x3c;
        cVar3 = *(char *)(param_1 + 0x489);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x489);
      }
      if (cVar3 == '\0') goto LAB_0360bf98;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
      }
      uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
      *(char *)(param_1 + 0x4bd) = (char)uVar11;
      if (*(byte *)(param_1 + 0x4be) == 0) {
        sVar13 = 0x186;
      }
      else {
        sVar13 = (short)(uVar11 >>
                        (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                 -0x34 + 0x186;
      }
LAB_0360bfe0:
      *(short *)(param_1 + 0x500) = sVar13;
      cVar3 = *(char *)(param_1 + 0x488);
    }
    if ((cVar3 == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      uVar7 = 0x36;
      goto LAB_0360dd0c;
    }
    if (*(char *)(param_1 + 0x4c1) != '\0') goto LAB_0360dca8;
    *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x36;
    cVar3 = *(char *)(param_1 + 0x489);
joined_r0x0360dcac:
    if (cVar3 == '\0') goto LAB_0360dd28;
    uVar11 = 4;
    if (*(char *)(param_1 + 0x4bf) == '\0') {
      uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
    }
    uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
    *(char *)(param_1 + 0x4bd) = (char)uVar11;
    if (*(byte *)(param_1 + 0x4be) == 0) {
      sVar13 = 0x186;
    }
    else {
      sVar13 = (short)(uVar11 >>
                      (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
               -0x34 + 0x186;
    }
  }
  else {
    if (*(byte *)(param_1 + -0x102e) < 3) {
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4ad) = 0x8a;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c048;
        }
LAB_0360b560:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c0cc;
LAB_0360c054:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c0cc;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xff
          ;
        }
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
          goto LAB_0360c0fc;
        }
LAB_0360c0e8:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c180;
LAB_0360c108:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c180;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x1a
          ;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x8a
          ;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360b560;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c048:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c054;
LAB_0360c0cc:
        *(undefined1 *)(param_1 + 0x4ae) = 0xff;
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c0e8;
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
LAB_0360c0fc:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c108;
LAB_0360c180:
        *(undefined1 *)(param_1 + 0x4af) = 0x1a;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b0) = 0x57;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c254;
        }
LAB_0360c238:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c2d4;
LAB_0360c260:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c2d4;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x57
          ;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c238;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c254:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c260;
LAB_0360c2d4:
        *(undefined1 *)(param_1 + 0x4b1) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b2) = 0x71;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x71
          ;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b3) = 0x81;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c450;
        }
LAB_0360c428:
        *(undefined2 *)(param_1 + 0x500) = 0;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c4d4;
LAB_0360c45c:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c4d4;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xff
          ;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x81
          ;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c428;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
        *(char *)(param_1 + 0x4bd) = (char)uVar11;
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)(uVar11 >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c450:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c45c;
LAB_0360c4d4:
        *(undefined1 *)(param_1 + 0x4b4) = 0xff;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b5) = 0xd8;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c5a8;
        }
LAB_0360c58c:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c62c;
LAB_0360c5b4:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c62c;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xbb
          ;
        }
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
          goto LAB_0360c65c;
        }
LAB_0360c648:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c6e0;
LAB_0360c668:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c6e0;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x19
          ;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xd8
          ;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c58c;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c5a8:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c5b4;
LAB_0360c62c:
        *(undefined1 *)(param_1 + 0x4b6) = 0xbb;
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c648;
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
LAB_0360c65c:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c668;
LAB_0360c6e0:
        *(undefined1 *)(param_1 + 0x4b7) = 0x19;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b8) = 0x3d;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c7b4;
        }
LAB_0360c798:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360c838;
LAB_0360c7c0:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360c838;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 5;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0x3d
          ;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c798;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c7b4:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c7c0;
LAB_0360c838:
        *(undefined1 *)(param_1 + 0x4b9) = 5;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4ba) = 0xdc;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0xdc
          ;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4bb) = 4;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c9b8;
        }
LAB_0360c990:
        *(undefined2 *)(param_1 + 0x500) = 0;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        cVar3 = *(char *)(param_1 + 0x488);
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 4;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c990;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
        *(char *)(param_1 + 0x4bd) = (char)uVar11;
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)(uVar11 >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c9b8:
        *(short *)(param_1 + 0x500) = sVar13;
        cVar3 = *(char *)(param_1 + 0x488);
      }
      if ((cVar3 != '\0') && (*(char *)(param_1 + 0x4aa) == '\0')) {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          bVar2 = *(byte *)(param_1 + 0x4ac);
          uVar7 = 0x37;
          goto LAB_0360dc9c;
        }
        goto LAB_0360dca8;
      }
      uVar7 = 0x37;
LAB_0360dd0c:
      *(undefined1 *)(param_1 + 0x4bc) = uVar7;
      cVar3 = *(char *)(param_1 + 0x489);
    }
    else {
      bVar4 = *(char *)(param_1 + 0x488) == '\0';
      bVar5 = *(char *)(param_1 + 0x4aa) != '\0';
      if (*(char *)(param_1 + -0x102d) != '\a') {
        if (bVar4 || bVar5) {
          *(undefined1 *)(param_1 + 0x4ad) = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            sVar13 = 0x186;
            *(undefined1 *)(param_1 + 0x4bd) = 0;
            goto LAB_0360ca98;
          }
LAB_0360c034:
          *(undefined2 *)(param_1 + 0x500) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360cb1c;
LAB_0360caa4:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360cb1c;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              sVar13 = 0x186;
            }
            else {
              sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                              (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)
                              ) * -0x34 + 0x186;
            }
            goto LAB_0360cbe8;
          }
LAB_0360cb38:
          *(undefined2 *)(param_1 + 0x500) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360cc68;
LAB_0360cbf4:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360cc68;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c034;
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
LAB_0360ca98:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360caa4;
LAB_0360cb1c:
          *(undefined1 *)(param_1 + 0x4ae) = 0xff;
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360cb38;
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
LAB_0360cbe8:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360cbf4;
LAB_0360cc68:
          *(undefined1 *)(param_1 + 0x4af) = 0;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined1 *)(param_1 + 0x4b0) = 0xff;
          if (*(char *)(param_1 + 0x489) != '\0') {
            sVar13 = 0x186;
            *(undefined1 *)(param_1 + 0x4bd) = 0;
            goto LAB_0360ce80;
          }
LAB_0360cdd0:
          *(undefined2 *)(param_1 + 0x500) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360cf00;
LAB_0360ce8c:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360cf00;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360cdd0;
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
LAB_0360ce80:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360ce8c;
LAB_0360cf00:
          *(undefined1 *)(param_1 + 0x4b1) = 0;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined1 *)(param_1 + 0x4b2) = 0xff;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined1 *)(param_1 + 0x4b3) = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            sVar13 = 0x186;
            *(undefined1 *)(param_1 + 0x4bd) = 0;
            goto LAB_0360d260;
          }
LAB_0360d1ac:
          *(undefined2 *)(param_1 + 0x500) = 0;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d2e4;
LAB_0360d26c:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d2e4;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d1ac;
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
          *(char *)(param_1 + 0x4bd) = (char)uVar11;
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)(uVar11 >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
LAB_0360d260:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d26c;
LAB_0360d2e4:
          *(undefined1 *)(param_1 + 0x4b4) = 0xff;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined1 *)(param_1 + 0x4b5) = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            sVar13 = 0x186;
            *(undefined1 *)(param_1 + 0x4bd) = 0;
            goto LAB_0360d508;
          }
LAB_0360d448:
          *(undefined2 *)(param_1 + 0x500) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d58c;
LAB_0360d514:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d58c;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              sVar13 = 0x186;
            }
            else {
              sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                              (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)
                              ) * -0x34 + 0x186;
            }
            goto LAB_0360d658;
          }
LAB_0360d5a8:
          *(undefined2 *)(param_1 + 0x500) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d6d8;
LAB_0360d664:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d6d8;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d448;
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
LAB_0360d508:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d514;
LAB_0360d58c:
          *(undefined1 *)(param_1 + 0x4b6) = 0xff;
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d5a8;
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
LAB_0360d658:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d664;
LAB_0360d6d8:
          *(undefined1 *)(param_1 + 0x4b7) = 0;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined1 *)(param_1 + 0x4b8) = 0xff;
          if (*(char *)(param_1 + 0x489) != '\0') {
            sVar13 = 0x186;
            *(undefined1 *)(param_1 + 0x4bd) = 0;
            goto LAB_0360d8f0;
          }
LAB_0360d840:
          *(undefined2 *)(param_1 + 0x500) = 0;
          if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d970;
LAB_0360d8fc:
          if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d970;
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d840;
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
LAB_0360d8f0:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d8fc;
LAB_0360d970:
          *(undefined1 *)(param_1 + 0x4b9) = 0;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined1 *)(param_1 + 0x4ba) = 0xff;
          uVar8 = 0;
          if (*(char *)(param_1 + 0x489) != '\0') {
            uVar8 = 0x186;
          }
        }
        else {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) =
                 0xff;
          }
          uVar8 = (ushort)*(byte *)(param_1 + 0x489);
          if (*(byte *)(param_1 + 0x489) != 0) {
            uVar11 = 4;
            if (*(char *)(param_1 + 0x4bf) == '\0') {
              uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
            }
            if (*(byte *)(param_1 + 0x4be) == 0) {
              uVar8 = 0x186;
            }
            else {
              uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                             (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                      * -0x34 + 0x186;
            }
          }
        }
        *(ushort *)(param_1 + 0x500) = uVar8;
        if ((*(char *)(param_1 + 0x488) != '\0') && (*(char *)(param_1 + 0x4aa) == '\0')) {
          if (*(char *)(param_1 + 0x4c1) == '\0') {
            *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
          }
          if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360dc1c;
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
          *(char *)(param_1 + 0x4bd) = (char)uVar11;
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)(uVar11 >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
LAB_0360dc78:
          *(short *)(param_1 + 0x500) = sVar13;
          if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360dc84;
LAB_0360dd08:
          uVar7 = 0xff;
          goto LAB_0360dd0c;
        }
        *(undefined1 *)(param_1 + 0x4bb) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360dc78;
        }
LAB_0360dc1c:
        *(undefined2 *)(param_1 + 0x500) = 0;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360dd08;
LAB_0360dc84:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360dd08;
        if (*(char *)(param_1 + 0x4c1) != '\0') goto LAB_0360dca8;
        bVar2 = *(byte *)(param_1 + 0x4ac);
        uVar7 = 0xff;
LAB_0360dc9c:
        *(undefined1 *)(param_1 + ((ulong)(bVar2 >> 1) & 0xf) + 0x4ad) = uVar7;
LAB_0360dca8:
        cVar3 = *(char *)(param_1 + 0x489);
        goto joined_r0x0360dcac;
      }
      if (bVar4 || bVar5) {
        *(undefined1 *)(param_1 + 0x4ad) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360c9ec;
        }
LAB_0360c024:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360ca6c;
LAB_0360c9f8:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360ca6c;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
          goto LAB_0360cb4c;
        }
LAB_0360ca84:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360cbcc;
LAB_0360cb58:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360cbcc;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360c024;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360c9ec:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360c9f8;
LAB_0360ca6c:
        *(undefined1 *)(param_1 + 0x4ae) = 0;
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360ca84;
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
LAB_0360cb4c:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360cb58;
LAB_0360cbcc:
        *(undefined1 *)(param_1 + 0x4af) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b0) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360cde4;
        }
LAB_0360cd1c:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360ce64;
LAB_0360cdf0:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360ce64;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360cd1c;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360cde4:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360cdf0;
LAB_0360ce64:
        *(undefined1 *)(param_1 + 0x4b1) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b2) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b3) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360d1c4;
        }
LAB_0360d0f8:
        *(undefined2 *)(param_1 + 0x500) = 0;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d244;
LAB_0360d1d0:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d244;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d0f8;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
        *(char *)(param_1 + 0x4bd) = (char)uVar11;
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)(uVar11 >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360d1c4:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d1d0;
LAB_0360d244:
        *(undefined1 *)(param_1 + 0x4b4) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b5) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360d45c;
        }
LAB_0360d39c:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d4dc;
LAB_0360d468:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d4dc;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            sVar13 = 0x186;
          }
          else {
            sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                            (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7))
                     * -0x34 + 0x186;
          }
          goto LAB_0360d5bc;
        }
LAB_0360d4f4:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d63c;
LAB_0360d5c8:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d63c;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d39c;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360d45c:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d468;
LAB_0360d4dc:
        *(undefined1 *)(param_1 + 0x4b6) = 0;
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d4f4;
        sVar13 = 0x186;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
LAB_0360d5bc:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d5c8;
LAB_0360d63c:
        *(undefined1 *)(param_1 + 0x4b7) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4b8) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360d854;
        }
LAB_0360d78c:
        *(undefined2 *)(param_1 + 0x500) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360d8d4;
LAB_0360d860:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360d8d4;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360d78c;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x4bf) == '\0') {
          uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar13 = 0x186;
        }
        else {
          sVar13 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
LAB_0360d854:
        *(short *)(param_1 + 0x500) = sVar13;
        if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360d860;
LAB_0360d8d4:
        *(undefined1 *)(param_1 + 0x4b9) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4ba) = 0;
        uVar8 = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          uVar8 = 0x186;
        }
      }
      else {
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        uVar8 = (ushort)*(byte *)(param_1 + 0x489);
        if (*(byte *)(param_1 + 0x489) != 0) {
          uVar11 = 4;
          if (*(char *)(param_1 + 0x4bf) == '\0') {
            uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
          }
          if (*(byte *)(param_1 + 0x4be) == 0) {
            uVar8 = 0x186;
          }
          else {
            uVar8 = (short)((*(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf) >>
                           (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                    -0x34 + 0x186;
          }
        }
      }
      *(ushort *)(param_1 + 0x500) = uVar8;
      if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
        *(undefined1 *)(param_1 + 0x4bb) = 0;
        if (*(char *)(param_1 + 0x489) != '\0') {
          sVar13 = 0x186;
          *(undefined1 *)(param_1 + 0x4bd) = 0;
          goto LAB_0360dc34;
        }
LAB_0360db68:
        *(undefined2 *)(param_1 + 0x500) = 0;
        *(undefined1 *)(param_1 + 0x4bd) = 0;
        if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0360dc64;
LAB_0360dc40:
        if (*(char *)(param_1 + 0x4aa) != '\0') goto LAB_0360dc64;
        if (*(char *)(param_1 + 0x4c1) == '\0') {
          *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
        }
        goto LAB_0360dca8;
      }
      if (*(char *)(param_1 + 0x4c1) == '\0') {
        *(undefined1 *)(param_1 + ((ulong)(*(byte *)(param_1 + 0x4ac) >> 1) & 0xf) + 0x4ad) = 0;
      }
      if (*(char *)(param_1 + 0x489) == '\0') goto LAB_0360db68;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x4bf) == '\0') {
        uVar11 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
      }
      uVar11 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar11 & 0xf;
      *(char *)(param_1 + 0x4bd) = (char)uVar11;
      if (*(byte *)(param_1 + 0x4be) == 0) {
        sVar13 = 0x186;
      }
      else {
        sVar13 = (short)(uVar11 >>
                        (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                 -0x34 + 0x186;
      }
LAB_0360dc34:
      *(short *)(param_1 + 0x500) = sVar13;
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_0360dc40;
LAB_0360dc64:
      *(undefined1 *)(param_1 + 0x4bc) = 0;
      cVar3 = *(char *)(param_1 + 0x489);
    }
    if (cVar3 == '\0') {
LAB_0360dd28:
      *(undefined2 *)(param_1 + 0x500) = 0;
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      goto LAB_0360dd30;
    }
    sVar13 = 0x186;
    *(undefined1 *)(param_1 + 0x4bd) = 0;
  }
  *(short *)(param_1 + 0x500) = sVar13;
LAB_0360dd30:
  bVar2 = *(byte *)(param_1 + 0x4f9);
  uVar8 = (*(byte *)(param_1 + 0x4f8) >> 4 & 7) + 1;
  uVar1 = (*(byte *)(param_1 + 0x4f8) & 7) + 1;
  *(ushort *)(param_1 + 0x50c) = -(bVar2 & 1) & uVar1;
  uVar11 = (uint)bVar2;
  *(ushort *)(param_1 + 0x504) = uVar8 & (ushort)((int)((uint)bVar2 << 0x1b) >> 0x1f);
  *(ushort *)(param_1 + 0x50e) = uVar1 & (ushort)((int)(uVar11 << 0x1e) >> 0x1f);
  *(ushort *)(param_1 + 0x506) = uVar8 & (ushort)((int)(uVar11 << 0x1a) >> 0x1f);
  *(ushort *)(param_1 + 0x508) = uVar8 & (ushort)((int)(uVar11 << 0x19) >> 0x1f);
  *(ushort *)(param_1 + 0x50a) = uVar8 & (ushort)((uint)(int)(char)bVar2 >> 7);
  *(ushort *)(param_1 + 0x510) = uVar1 & (ushort)((int)((uint)bVar2 << 0x1d) >> 0x1f);
  *(ushort *)(param_1 + 0x512) = uVar1 & (ushort)((int)((uint)bVar2 << 0x1c) >> 0x1f);
  return;
}

