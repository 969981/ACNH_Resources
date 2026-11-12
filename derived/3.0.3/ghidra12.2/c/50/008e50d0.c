
void FUN_008e50d0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *__src;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined *local_a8;
  char *pcStack_a0;
  undefined **local_98;
  char *local_90;
  int local_88;
  char local_84 [5];
  char acStack_7f [3];
  char acStack_7c [5];
  undefined1 local_77;
  undefined1 local_65;
  
  local_90 = local_84;
  local_88 = 0x20;
  local_84 = (char  [5])s_HotelTradeBox_040d98c4._0_5_;
  acStack_7f = (char  [3])s_HotelTradeBox_040d98c4._5_3_;
  acStack_7c = (char  [5])s_HotelTradeBox_040d98c4._8_5_;
  local_65 = 0;
  local_98 = &PTR_LAB_048f9700;
  local_77 = 0;
  iVar1 = *(int *)(DAT_04cd19d8 + 0x15c);
  if (iVar1 == 0) goto LAB_008e5230;
  uVar2 = *(uint *)(param_1 + 0x307e8);
  if (uVar2 == 0x62) {
    ppuVar8 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
LAB_008e51b0:
    __src = *ppuVar8;
    if (local_90 == __src) goto LAB_008e5230;
  }
  else {
    if (uVar2 < 99) {
      ppuVar8 = &PTR_s_cNormal_04922de8 + uVar2;
      goto LAB_008e51b0;
    }
    __src = "";
  }
  pcVar4 = local_90;
  lVar5 = 0;
  do {
    if (__src[lVar5] == '\0') goto LAB_008e520c;
    if (__src[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_008e520c;
    }
    if (__src[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_008e520c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_008e520c:
  iVar3 = (int)lVar5;
  if (local_88 <= (int)lVar5) {
    iVar3 = local_88 + -1;
  }
  memcpy(local_90,__src,(long)iVar3);
  pcVar4[iVar3] = '\0';
LAB_008e5230:
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "HotelTradeBox";
  FUN_008c4100(param_1,&local_98,&local_a8,param_2,0,0,1);
  iVar3 = *(int *)(param_1 + 0x31080);
  if (*(int *)(param_1 + 0x30964) == 0) {
    if (iVar3 == 0) {
      return;
    }
    uVar6 = 0x12;
    uVar7 = 0x10;
  }
  else {
    if (iVar3 == 0) {
      return;
    }
    uVar6 = 0x11;
    uVar7 = 0xf;
  }
  if (iVar1 != 0) {
    uVar7 = uVar6;
  }
  *(undefined4 *)(param_1 + 0x30800) = uVar7;
  *(code **)(param_1 + 0x37f68) = FUN_008c5c98;
  *(undefined8 *)(param_1 + 0x37f70) = 0;
  *(undefined ***)(param_1 + 0x37f58) = &PTR_LAB_04925a90;
  *(long *)(param_1 + 0x37f60) = param_1;
  lVar5 = *(long *)(*(long *)(param_1 + 0x31088) + (long)(iVar3 + -1) * 8);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 4) = 1;
  }
  return;
}

