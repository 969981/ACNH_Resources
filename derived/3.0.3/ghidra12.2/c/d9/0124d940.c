
uint FUN_0124d940(long param_1,long param_2,uint param_3,long param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar8 = FUN_0123b5b0(*(undefined8 *)(param_1 + 0x10));
  if ((uVar8 & 1) == 0) {
    uVar6 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),4);
    if ((uVar6 & 1) != 0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff9ffff;
    }
    if (param_2 < 1) goto LAB_0124daec;
    puVar1 = (undefined2 *)(param_1 + 8);
    iVar7 = FUN_0277d6c4(puVar1);
    uVar4 = DAT_0514cb60;
    uVar3 = DAT_0514cb5c;
    uVar2 = DAT_0514cb64;
    if (iVar7 == 0xed41) {
      uVar2 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar2 = uVar2 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar2 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      if (0x1d < (uint)((ulong)uVar2 * 100 >> 0x20)) goto LAB_0124da74;
      uVar3 = uVar3 ^ uVar3 << 0xb;
      DAT_0514cb58 = uVar4;
      DAT_0514cb5c = DAT_0514cb64;
      DAT_0514cb64 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
      iVar7 = *(int *)(&DAT_04174a4c + ((ulong)DAT_0514cb64 + (ulong)DAT_0514cb64 * 2 >> 0x1e & 0xc)
                      );
      DAT_0514cb60 = uVar2;
    }
    else {
LAB_0124da74:
      DAT_0514cb64 = uVar2;
      iVar7 = FUN_0123c7a0(puVar1);
      if (iVar7 == 0xfffe) goto LAB_0124daec;
    }
    *puVar1 = (short)iVar7;
    lVar5 = DAT_05150358;
    if (DAT_05150358 == 0) {
LAB_0124dad8:
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if ((*(long *)(DAT_05150358 + 0xb0) != 0) &&
         (uVar9 = 0, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) {
        uVar6 = FUN_0277d6c4(puVar1);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if (*(uint *)(lVar5 + 0x1d8) <= uVar6) goto LAB_0124dad8;
        uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar6 * 8);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    while (param_2 = param_2 + -1, param_2 != 0) {
      iVar7 = FUN_0277d6c4(puVar1);
      uVar3 = DAT_0514cb60;
      uVar2 = DAT_0514cb5c;
      uVar6 = DAT_0514cb64;
      if (iVar7 == 0xed41) {
        uVar6 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar6 = uVar6 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar6 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        if (0x1d < (uint)((ulong)uVar6 * 100 >> 0x20)) goto LAB_0124dbb4;
        uVar2 = uVar2 ^ uVar2 << 0xb;
        DAT_0514cb58 = uVar3;
        DAT_0514cb5c = DAT_0514cb64;
        DAT_0514cb64 = uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar2 ^ uVar6;
        iVar7 = *(int *)(&DAT_04174a4c +
                        ((ulong)DAT_0514cb64 + (ulong)DAT_0514cb64 * 2 >> 0x1e & 0xc));
        DAT_0514cb60 = uVar6;
      }
      else {
LAB_0124dbb4:
        DAT_0514cb64 = uVar6;
        iVar7 = FUN_0123c7a0(puVar1);
        if (iVar7 == 0xfffe) break;
      }
      lVar5 = DAT_05150358;
      *puVar1 = (short)iVar7;
      if (lVar5 == 0) {
LAB_0124db30:
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((*(long *)(lVar5 + 0xb0) != 0) &&
           (uVar9 = 0, *(long *)(*(long *)(lVar5 + 0xb0) + 8) != 0)) {
          uVar6 = FUN_0277d6c4(puVar1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (*(uint *)(lVar5 + 0x1d8) <= uVar6) goto LAB_0124db30;
          uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar6 * 8);
        }
      }
      *(undefined8 *)(param_1 + 0x10) = uVar9;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar6 & 0xfff9ffff;
    if ((uVar6 & 0x180000) != 0) {
      if ((param_3 & 1) == 0) {
        param_4 = param_2;
      }
      uVar2 = uVar6 & 0xffe1ffff;
      if (param_4 < (long)((ulong)(uVar6 >> 0x13) & 3)) {
        uVar2 = uVar6 & 0xffe00000 |
                uVar6 & 0x1ffff | ((uVar6 >> 0x13) - (int)param_4) * 0x80000 & 0x180000;
      }
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
  uVar6 = 1;
LAB_0124daec:
  return uVar6 & 1;
}

