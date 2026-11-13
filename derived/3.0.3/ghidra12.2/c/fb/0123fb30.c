
undefined8 FUN_0123fb30(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_18;
  
  iVar3 = FUN_0277d6c4();
  if (iVar3 == 0x373d) {
    if (param_2 == (undefined4 *)0x0) {
      return 1;
    }
    local_18 = 0xec9a;
  }
  else {
    iVar3 = FUN_0277d6c4(param_1);
    if (iVar3 == 0x3738) {
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      if ((param_3 & 1) != 0) {
        local_18 = 0xeb12;
        goto LAB_0123fc70;
      }
      uVar1 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar1 = uVar1 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar1 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      uVar2 = (ushort)*(undefined4 *)
                       (&DAT_041748d4 + ((ulong)uVar1 + (ulong)uVar1 * 4 >> 0x1e & 0x1c));
      DAT_0514cb64 = uVar1;
    }
    else {
      iVar3 = FUN_0277d6c4(param_1);
      if (iVar3 == 0x3739) {
        lVar4 = 0;
      }
      else {
        iVar3 = FUN_0277d6c4(param_1);
        if (iVar3 == 0x373a) {
          lVar4 = 1;
        }
        else {
          iVar3 = FUN_0277d6c4(param_1);
          if (iVar3 == 0x373b) {
            lVar4 = 2;
          }
          else {
            iVar3 = FUN_0277d6c4(param_1);
            if (iVar3 != 0x373c) {
              return 0;
            }
            lVar4 = 3;
          }
        }
      }
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar2 = (ushort)(&DAT_04101cd0)[lVar4];
    }
    local_18 = (ulong)uVar2;
  }
LAB_0123fc70:
  FUN_0277d4ac(&local_18);
  *param_2 = (undefined4)local_18;
  param_2[1] = local_18._4_4_;
  return 1;
}

