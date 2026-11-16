
void FUN_02644360(void)

{
  long *plVar1;
  uint *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_026443d4:
    if (*pbVar8 < 8) goto LAB_0264444c;
LAB_026443e0:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02644444:
      pbVar8 = &DAT_0548e168;
      goto LAB_0264444c;
    }
    lVar10 = *DAT_0537d558;
    bVar9 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar2 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar9 = *pbVar8;
    bVar3 = 7 < bVar9;
    if (bVar3) {
      bVar9 = 0xff;
    }
    local_48 = CONCAT71(local_48._1_7_,bVar9);
    if (bVar3) goto LAB_02644444;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026443d4;
      }
      goto LAB_026443e0;
    }
LAB_0264444c:
    bVar9 = *pbVar8;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_48 = CONCAT71(local_48._1_7_,bVar9);
  }
  FUN_0267b340(&local_48,DAT_0555c1dc);
  lVar10 = DAT_05574040;
  switch(DAT_0555c1d8) {
  case 0:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8a48;
    break;
  case 1:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8a80;
    break;
  case 2:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8ab8;
    break;
  case 3:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8af0;
    break;
  case 4:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8b28;
    break;
  case 5:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8b60;
    break;
  case 6:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8b98;
    break;
  default:
    goto switchD_02644494_default;
  }
  plVar1 = (long *)(lVar10 + lVar4);
  lVar10 = plVar1[4];
  if (lVar10 == 0) {
    FUN_0285dc20(plVar1[1] + *plVar1,DAT_0555c1dc,100000);
    return;
  }
  if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 0;
    plVar6 = *(long **)(lVar10 + 0x20);
joined_r0x02644700:
    if (plVar6 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = plVar1[1];
      uStack_38 = 8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    uVar5 = uVar5 & 0xffffffff;
    if (plVar1[4] != 0) {
      plVar6 = *(long **)(plVar1[4] + 0x20);
      goto joined_r0x02644700;
    }
  }
  FUN_0285dc20(plVar1[1] + *plVar1,DAT_0555c1dc,100000);
  if ((((uVar5 & 1) != 0) && (plVar1[4] != 0)) &&
     (puVar7 = *(undefined8 **)(plVar1[4] + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
switchD_02644494_default:
  return;
}

