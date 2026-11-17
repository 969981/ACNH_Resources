
undefined8 FUN_031c7f30(byte *param_1,int *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int local_5c;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  byte local_47;
  byte local_3c [4];
  int local_38;
  int local_34;
  int local_18;
  int local_14;
  
  local_14 = *param_2;
  if ((local_14 != DAT_05717400 && *param_1 < 8) &&
     ((uVar1 = FUN_0252ffe8(), (uVar1 & 1) != 0 || (uVar1 = FUN_02530518(param_1), (uVar1 & 1) != 0)
      ))) {
    local_18 = *param_2;
    uVar1 = FUN_02536144(param_1,&local_18);
    if ((uVar1 & 1) != 0) {
      local_34 = *param_2;
      uVar1 = FUN_02537ab4(param_1,&local_34,6);
      if ((uVar1 & 1) != 0) {
        if ((param_3 & 1) == 0) {
          local_38 = *param_2;
          FUN_0254a360(param_1,&local_38);
          if ((DAT_053e0208 != 0) && (*(long *)(DAT_053e0208 + 0x175a0) != 0)) {
            FUN_02119824(*(long *)(DAT_053e0208 + 0x175a0),param_2);
          }
        }
        local_3c[0] = *param_1;
        if (7 < local_3c[0]) {
          local_3c[0] = 0xff;
        }
        lVar2 = FUN_02583354(DAT_055021a0,local_3c,1);
        if (lVar2 == 0) {
          return 1;
        }
        lVar4 = lVar2 + 0x194b0;
        if (*(long *)(lVar2 + 0x194b8) == 0) {
          lVar4 = *(long *)(DAT_05574040 + 0x20);
        }
        local_48 = 0;
        lVar2 = lVar4 + 0x1148;
        local_50 = lVar2;
        if (*(long *)(lVar4 + 0x1170) == 0) {
          local_47 = 0;
        }
        else {
          puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x1170) + 0x10);
          local_47 = 0;
          if (puVar3 != (undefined8 *)0x0) {
            local_47 = (**(code **)*puVar3)();
          }
        }
        local_47 = local_47 & 1;
        local_58 = PTR_DAT_04bb6c30 + 0x10;
        FUN_02640280(lVar2,0x208);
        local_5c = *param_2;
        FUN_0280a2d0(*(long *)(lVar4 + 0x1158) + *(long *)(lVar4 + 0x1150),&local_5c);
        FUN_02640184(&local_58);
        return 1;
      }
    }
  }
  return 0;
}

