
uint FUN_019556fc(undefined8 param_1,byte *param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_58;
  undefined8 uStack_50;
  byte *local_48;
  ulong *puStack_40;
  ulong local_38;
  
  if (7 < *param_2) {
    return 0;
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar1 = FUN_02582d8c(param_2,2);
    if (-1 < iVar1) goto LAB_0195577c;
  }
  else {
    local_58 = (undefined **)CONCAT71(local_58._1_7_,*param_2);
    uVar3 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_58);
    if ((uVar3 & 1) != 0) {
LAB_0195577c:
      iVar1 = FUN_0277d6c4(param_3);
      if (iVar1 == 0x26e) {
        uVar2 = 1;
      }
      else {
        local_38 = *param_4;
        if ((local_38 & 0xffff) != 0) {
          lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
          local_58 = (undefined **)(lVar4 + 0x1c20);
          local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
        }
        local_58 = &PTR_LAB_049e1960;
        puStack_40 = &local_38;
        uStack_50 = param_1;
        local_48 = param_2;
        uVar2 = FUN_01954c30(param_1,param_3,param_4,&local_38,&local_58);
      }
      goto LAB_019557f0;
    }
  }
  uVar2 = 0;
LAB_019557f0:
  return uVar2 & 1;
}

