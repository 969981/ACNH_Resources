
/* WARNING: Removing unreachable block (ram,0x027d1930) */
/* WARNING: Removing unreachable block (ram,0x027d1b58) */
/* WARNING: Removing unreachable block (ram,0x027d1a18) */
/* WARNING: Removing unreachable block (ram,0x027d1818) */
/* WARNING: Removing unreachable block (ram,0x027d1804) */
/* WARNING: Removing unreachable block (ram,0x027d1740) */
/* WARNING: Removing unreachable block (ram,0x027d172c) */
/* WARNING: Removing unreachable block (ram,0x027d1668) */
/* WARNING: Removing unreachable block (ram,0x027d1654) */
/* WARNING: Removing unreachable block (ram,0x027d1590) */
/* WARNING: Removing unreachable block (ram,0x027d157c) */
/* WARNING: Removing unreachable block (ram,0x027d14dc) */
/* WARNING: Removing unreachable block (ram,0x027d14a0) */
/* WARNING: Removing unreachable block (ram,0x027d145c) */
/* WARNING: Removing unreachable block (ram,0x027d1474) */
/* WARNING: Removing unreachable block (ram,0x027d14b0) */
/* WARNING: Removing unreachable block (ram,0x027d1510) */
/* WARNING: Removing unreachable block (ram,0x027d1524) */
/* WARNING: Removing unreachable block (ram,0x027d15e8) */
/* WARNING: Removing unreachable block (ram,0x027d15fc) */
/* WARNING: Removing unreachable block (ram,0x027d16c0) */
/* WARNING: Removing unreachable block (ram,0x027d16d4) */
/* WARNING: Removing unreachable block (ram,0x027d1798) */
/* WARNING: Removing unreachable block (ram,0x027d17ac) */
/* WARNING: Removing unreachable block (ram,0x027d1908) */
/* WARNING: Removing unreachable block (ram,0x027d1978) */
/* WARNING: Removing unreachable block (ram,0x027d1ab8) */
/* WARNING: Removing unreachable block (ram,0x027d1bf8) */
/* WARNING: Removing unreachable block (ram,0x027d1bbc) */
/* WARNING: Removing unreachable block (ram,0x027d1944) */
/* WARNING: Removing unreachable block (ram,0x027d1c0c) */
/* WARNING: Removing unreachable block (ram,0x027d1a2c) */
/* WARNING: Removing unreachable block (ram,0x027d1960) */
/* WARNING: Removing unreachable block (ram,0x027d1b08) */
/* WARNING: Removing unreachable block (ram,0x027d198c) */
/* WARNING: Removing unreachable block (ram,0x027d1acc) */
/* WARNING: Removing unreachable block (ram,0x027d19c8) */
/* WARNING: Removing unreachable block (ram,0x027d19dc) */
/* WARNING: Removing unreachable block (ram,0x027d1ba8) */
/* WARNING: Removing unreachable block (ram,0x027d1a68) */
/* WARNING: Removing unreachable block (ram,0x027d1a7c) */
/* WARNING: Removing unreachable block (ram,0x027d1b1c) */
/* WARNING: Removing unreachable block (ram,0x027d1b6c) */

void FUN_027d1420(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short local_70 [2];
  short local_6c [2];
  uint local_68;
  uint local_64;
  
  uVar8 = 1 << (ulong)(*(byte *)(param_1 + 0x1c4) & 0x1f);
  if (9 < *(byte *)(param_1 + 0x1c4)) {
    uVar8 = 0;
  }
  if (*(byte *)(param_1 + 0x14ac) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x14ac) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar9 = 0;
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 0;
  }
  if (*(byte *)(param_1 + 0x2794) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x2794) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 4;
    }
  }
  if (*(byte *)(param_1 + 0x3a7c) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x3a7c) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 8;
    }
  }
  if (*(byte *)(param_1 + 0x4d64) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x4d64) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 0x10;
    }
  }
  if (*(byte *)(param_1 + 0x604c) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x604c) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 0x20;
    }
  }
  if (*(byte *)(param_1 + 0x7334) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x7334) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 0x40;
    }
  }
  if (*(byte *)(param_1 + 0x861c) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x861c) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 0x80;
    }
  }
  if (*(byte *)(param_1 + 0x9904) < 10) {
    uVar11 = 1 << (ulong)(*(byte *)(param_1 + 0x9904) & 0x1f);
    if ((uVar11 & uVar8) == 0) {
      uVar8 = uVar11 | uVar8;
    }
    else {
      uVar9 = uVar9 | 0x100;
    }
  }
  if ((*(byte *)(param_1 + 0xabec) < 10) &&
     ((uVar8 >> (ulong)(*(byte *)(param_1 + 0xabec) & 0x1f) & 1) != 0)) {
    uVar9 = uVar9 | 0x200;
  }
  do {
    uVar8 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    if ((uVar8 + (uVar8 >> 0x10) & 0x3f) == 0) {
      return;
    }
    if (uVar9 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = uVar9 - 1 & (uVar9 ^ 0xffffffff);
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
    }
    lVar4 = param_1 + (ulong)uVar8 * 0x12e8;
    if (9 < uVar8) {
      lVar4 = param_1;
    }
    cVar2 = *(char *)(lVar4 + 0x1c4);
    if (cVar2 != -1) {
      uVar11 = (uint)(*(char *)(param_1 + 0x1c4) == cVar2);
      if (*(char *)(param_1 + 0x14ac) == cVar2) {
        uVar11 = uVar11 | 2;
      }
      if (*(char *)(param_1 + 0x2794) == cVar2) {
        uVar11 = uVar11 | 4;
      }
      if (*(char *)(param_1 + 0x3a7c) == cVar2) {
        uVar11 = uVar11 | 8;
      }
      if (*(char *)(param_1 + 0x4d64) == cVar2) {
        uVar11 = uVar11 | 0x10;
      }
      if (*(char *)(param_1 + 0x604c) == cVar2) {
        uVar11 = uVar11 | 0x20;
      }
      if (*(char *)(param_1 + 0x7334) == cVar2) {
        uVar11 = uVar11 | 0x40;
      }
      if (*(char *)(param_1 + 0x861c) == cVar2) {
        uVar11 = uVar11 | 0x80;
      }
      if (*(char *)(param_1 + 0x9904) == cVar2) {
        uVar11 = uVar11 | 0x100;
      }
      local_68 = 9;
      local_64 = 0;
      if (*(char *)(param_1 + 0xabec) == cVar2) {
        uVar11 = uVar11 | 0x200;
      }
      lVar4 = FUN_0265c2a0();
      if (lVar4 != 0) {
        if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
           (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)*puVar5)();
          uVar6 = uVar6 & 0xffffffff;
        }
        uVar7 = FUN_026b2f38(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),&local_68,local_6c,
                             local_70);
        if ((uVar7 & 1) != 0) {
          bVar3 = false;
          uVar10 = 0;
          do {
            local_64 = uVar10;
            if ((local_64 < 10) && ((uVar11 >> (ulong)(local_64 & 0x1f) & 1) != 0)) {
              lVar1 = param_1 + (ulong)local_64 * 0x12e8;
              if (9 < local_64) {
                lVar1 = param_1;
              }
              uVar10 = 0xffffffff;
              if (local_64 < 10) {
                uVar10 = ~(1 << (ulong)(local_64 & 0x1f));
              }
              uVar11 = uVar10 & uVar11;
              uVar10 = 0xffffffff;
              if (local_64 < 10) {
                uVar10 = ~(1 << (ulong)(local_64 & 0x1f));
              }
              uVar9 = uVar10 & uVar9;
              if (((((uint)*(ushort *)(lVar1 + 8) == (local_68 & 0xffff)) &&
                   (*(short *)(lVar1 + 10) == local_6c[0])) &&
                  (*(short *)(lVar1 + 0xc) == local_70[0])) ||
                 ((((uint)*(ushort *)(lVar1 + 0xe) == (local_68 & 0xffff) &&
                   (*(short *)(lVar1 + 0x10) == local_6c[0])) &&
                  (*(short *)(lVar1 + 0x12) == local_70[0])))) {
                if (bVar3) goto LAB_027d1cb0;
                bVar3 = true;
              }
              else if ((bVar3) ||
                      (uVar10 = uVar11 - (uVar11 >> 1 & 0x55555555),
                      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
                      uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
                      (uVar10 + (uVar10 >> 0x10) & 0x3f) != 0)) {
LAB_027d1cb0:
                *(undefined2 *)(lVar1 + 0x1c4) = 0xffff;
              }
              else {
                bVar3 = false;
              }
            }
            uVar10 = 10;
            if ((int)local_64 < 10) {
              uVar10 = local_64 + 1;
            }
          } while (uVar10 != 10);
        }
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)();
        }
      }
    }
    uVar11 = 0xffffffff;
    if (uVar8 < 10) {
      uVar11 = ~(1 << (ulong)(uVar8 & 0x1f));
    }
    uVar9 = uVar9 & uVar11;
  } while( true );
}

