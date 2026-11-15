
byte FUN_021eabd0(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte unaff_w20;
  uint local_2c;
  undefined2 local_28;
  undefined2 local_24;
  
  lVar4 = FUN_021c9770(param_1,1);
  if (lVar4 != 0) {
    local_2c = 0;
    local_24 = 0;
    uVar5 = (ulong)*(byte *)(lVar4 + 0x18);
    local_28 = 0;
    if (uVar5 < 0x23) {
      if (((byte)PTR_DAT_04bc27f0[uVar5] < *(byte *)(lVar4 + 0x19)) ||
         (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(*(byte *)(lVar4 + 0x19) & 0x1f) & 1) == 0)) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_020fd7d8();
        local_2c = local_2c & 0xff;
      }
    }
    unaff_w20 = 1;
    FUN_0214c868(&local_24,&local_28,&local_2c,1,0);
    cVar3 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
    uVar1 = (int)cVar3 + 0x18;
    if (4 < cVar3) {
      uVar1 = (int)cVar3;
    }
    if ((uint)(byte)local_24 <= (uVar1 & 0xff)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
      if ((uint)(byte)local_24 != (uVar1 & 0xff) || local_24._1_1_ <= bVar2) {
        uVar1 = uVar1 & 0xff;
        uVar6 = (uint)(byte)local_28;
        if (uVar1 <= uVar6) {
          unaff_w20 = (uVar6 == uVar1 && local_28._1_1_ <= bVar2) &&
                      (uVar6 != uVar1 || bVar2 != local_28._1_1_);
        }
      }
    }
  }
  return lVar4 != 0 & unaff_w20;
}

