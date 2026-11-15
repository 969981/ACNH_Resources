
ushort FUN_022f1cf0(long param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined **local_38;
  undefined4 local_30;
  int local_2c;
  byte local_28;
  undefined1 local_27;
  
  uVar2 = *(ushort *)(param_1 + 0x38);
  if ((uVar2 >> 4 & 1) != 0) {
    if ((param_2 & 1) != 0) {
      local_30 = 0x11;
      local_28 = DAT_0548e140;
      if (7 < DAT_0548e140) {
        local_28 = 0xff;
      }
      local_38 = &PTR_LAB_04a7ef60;
      iVar5 = FUN_022f1914(*(undefined8 *)(param_1 + 8));
      uVar3 = uVar2;
      if (iVar5 != -1) {
        local_27 = 1;
        local_2c = iVar5;
        FUN_01393458(&local_38);
        uVar3 = *(ushort *)(param_1 + 0x38);
      }
      *(ushort *)(param_1 + 0x38) = uVar3 | 0x40;
    }
    FUN_022f3db0(param_1);
    *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xffef;
    lVar7 = *DAT_0537d558;
    if (1 < *(byte *)(lVar7 + 0x476)) {
      bVar4 = *(byte *)(lVar7 + 0x473);
      pbVar6 = PTR_DAT_04bc1220;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if (((*puVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar4)) goto LAB_022f1e08;
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar7 + 0x473);
        }
      }
      *(byte *)(param_1 + 0x3e) =
           *(byte *)(param_1 + 0x3e) & ((byte)(1 << (ulong)(*pbVar6 & 0x1f)) ^ 0xff);
    }
  }
LAB_022f1e08:
  return uVar2 >> 4 & 1;
}

