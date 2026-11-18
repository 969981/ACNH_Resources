
void FUN_03501b70(long param_1)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined *local_90;
  undefined4 local_88;
  
  uVar11 = 0;
  lVar8 = param_1 + 0x1ce3d;
  puVar1 = PTR_DAT_04bc4f00 + 0x10;
  do {
    lVar12 = *(long *)(*(long *)(param_1 + 0x220) + uVar11 * 8 + 0x570);
    if (lVar12 == 0) goto LAB_03501be0;
    iVar2 = *(int *)(param_1 + 0x1ce20);
    uVar7 = 10;
    if (iVar2 - 3U < 2) goto LAB_03501c94;
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar2);
    uVar7 = 0;
    if (DAT_0538adc8 == 0) goto LAB_03501c94;
    if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_03501c50_default:
      uVar7 = 0;
      goto LAB_03501c94;
    }
    switch(iVar2) {
    case 0:
      uVar7 = *(uint *)(DAT_0538adc8 + 0x170);
      break;
    case 1:
      uVar7 = *(uint *)(DAT_0538adc8 + 0x180);
      break;
    case 2:
      lVar9 = *(long *)(DAT_0538adc8 + 0x1b8);
      uVar7 = *(uint *)(DAT_0538adc8 + 0x1b0);
      goto LAB_03501c8c;
    case 3:
      uVar7 = *(uint *)(DAT_0538adc8 + 0x610) &
              ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
      break;
    case 4:
      lVar9 = *(long *)(DAT_0538adc8 + 0x1e0);
      uVar7 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_03501c8c:
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      break;
    default:
      goto switchD_03501c50_default;
    }
LAB_03501c94:
    if ((long)uVar11 < (long)(int)uVar7) {
      lVar9 = lVar8 + -0xd;
      uVar6 = FUN_01d77c78(lVar9);
      if ((uVar6 & 1) == 0) {
LAB_03501cf0:
        uVar6 = uVar11;
        if (*(uint *)(param_1 + 0x1cde8) <= uVar11) {
          uVar6 = 0;
        }
        uVar5 = FUN_034652d0(*(long *)(param_1 + 0x1cdf0) + uVar6 * 0x38,param_1 + 0x1c1b8,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar5);
        uVar13 = 0;
        bVar3 = false;
        switch(uVar5) {
        case 0:
          break;
        case 0xfffffffe:
          bVar3 = true;
          uVar13 = 0x40000000;
          break;
        default:
          uVar13 = 0x3f800000;
          bVar3 = false;
        }
      }
      else {
        uVar6 = FUN_01d77c78(lVar9);
        uVar13 = 0;
        if (((uVar6 & 1) != 0) && (*(char *)(lVar8 + -1) == '\0')) {
          bVar4 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar8,lVar9);
          *(byte *)(lVar8 + -1) = bVar4 & 1;
          if ((bVar4 & 1) == 0) goto LAB_03501cf0;
        }
        bVar3 = false;
      }
      plVar10 = (long *)**(undefined8 **)(lVar12 + 0x2f0);
      if (plVar10 != (long *)0x0) {
        local_88 = 0x14;
        local_90 = puVar1;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_90);
        (**(code **)(plVar10[3] + 0x158))(uVar13,plVar10[1]);
      }
      if (bVar3) {
        FUN_03464520();
      }
      else {
        FUN_03464670(*(undefined8 *)(lVar12 + 0x318),0);
      }
    }
LAB_03501be0:
    uVar11 = uVar11 + 1;
    lVar8 = lVar8 + 0x18;
    if (uVar11 == 10) {
      return;
    }
  } while( true );
}

