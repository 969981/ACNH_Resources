
uint FUN_02859d20(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
LAB_02859d44:
  uVar5 = uVar3;
  if ((uVar5 == 0) || (uVar5 == 0xb)) goto LAB_02859d40;
  if (uVar5 == 0xc) goto LAB_02859ebc;
  if ((((int)uVar5 < 0x80) && (uVar5 < 0x80)) &&
     ((*(byte *)(param_1 + (ulong)(uVar5 >> 3)) >> (ulong)(uVar5 & 7) & 1) != 0))
  goto code_r0x02859d8c;
  uVar3 = 0;
  uVar5 = 0;
  do {
    if ((uVar3 != 0) && (uVar3 != 0xb)) {
      if (uVar3 == 0xc) {
LAB_02859e1c:
        uVar3 = uVar5 - (uVar5 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
        if (uVar3 == 0) {
LAB_02859ebc:
          uVar3 = 0;
        }
        else {
          uVar2 = nn::os::GetSystemTick();
          uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
          uVar2 = uVar1 ^ uVar1 * 0x800;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
          uVar2 = (uint)((ulong)(uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) * (ulong)uVar3 >> 0x20)
          ;
          if (uVar2 < uVar3 && uVar5 != 0) {
            iVar4 = uVar2 + 2;
            uVar3 = 0xffffffff;
            do {
              iVar4 = iVar4 + -1;
              if (iVar4 < 2) {
                uVar3 = uVar5 - 1 & (uVar5 ^ 0xffffffff);
                uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
                uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                uVar3 = uVar3 + (uVar3 >> 8);
                return uVar3 + (uVar3 >> 0x10) & 0x3f;
              }
              uVar5 = uVar5 - 1 & uVar5;
            } while (uVar5 != 0);
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        return uVar3;
      }
      if (((int)uVar3 < 0x80) && (uVar3 < 0x80)) {
        if ((0xb < uVar3) ||
           ((1 << (ulong)(uVar3 & 7) & (uint)*(byte *)(param_1 + (ulong)(uVar3 >> 3))) != 0)) {
          if (uVar3 < 0xc) goto LAB_02859dc0;
          goto LAB_02859e1c;
        }
      }
      else if (0xb < uVar3) goto LAB_02859e1c;
      uVar5 = uVar5 | 1 << (ulong)(uVar3 & 0x1f);
    }
LAB_02859dc0:
    uVar3 = uVar3 + 1;
  } while( true );
code_r0x02859d8c:
  uVar3 = 0xc;
  if ((int)uVar5 < 0xc) {
LAB_02859d40:
    uVar3 = uVar5 + 1;
  }
  goto LAB_02859d44;
}

