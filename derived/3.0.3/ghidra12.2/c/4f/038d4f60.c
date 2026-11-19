
undefined8 FUN_038d4f60(uint *param_1,long param_2,uint param_3,ushort *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = 3;
  if ((param_3 != 0) && (-2 < (int)param_5)) {
    uVar7 = 0;
    uVar2 = 0x7fffffff;
    if (param_5 != 0xffffffff) {
      uVar2 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
    }
    uVar6 = (ulong)uVar2;
    do {
      pbVar1 = (byte *)(param_2 + (ulong)uVar7);
      if (uVar6 == 0) {
LAB_038d5040:
        uVar5 = 0;
        *pbVar1 = 0;
        if (param_1 == (uint *)0x0) {
          return 0;
        }
        goto LAB_038d5048;
      }
      uVar3 = *param_4;
      if (uVar3 == 0) goto LAB_038d5040;
      bVar4 = (byte)uVar3;
      if (uVar3 < 0x80) {
        *pbVar1 = bVar4;
        iVar8 = 1;
      }
      else if (uVar3 < 0x800) {
        if (param_3 <= uVar7 + 1) break;
        *pbVar1 = (byte)(uVar3 >> 6) | 0xc0;
        pbVar1[1] = bVar4 & 0x3f | 0x80;
        iVar8 = 2;
      }
      else {
        if (param_3 <= uVar7 + 2) break;
        *pbVar1 = (byte)(uVar3 >> 0xc) | 0xe0;
        pbVar1[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        pbVar1[2] = bVar4 & 0x3f | 0x80;
        iVar8 = 3;
      }
      uVar7 = iVar8 + uVar7;
      uVar6 = uVar6 - 1;
      param_4 = param_4 + 1;
    } while (uVar7 < param_3);
    uVar7 = uVar7 - 1;
    uVar5 = 2;
    *(undefined1 *)(param_2 + (ulong)uVar7) = 0;
    if (param_1 != (uint *)0x0) {
LAB_038d5048:
      *param_1 = uVar7;
    }
  }
  return uVar5;
}

