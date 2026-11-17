
void FUN_02f7a114(long param_1)

{
  long *plVar1;
  bool bVar2;
  uint *puVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_02f7a198:
    if (*pbVar6 < 8) goto LAB_02f7a204;
LAB_02f7a1a4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02f7a1fc:
      pbVar6 = &DAT_0548e168;
      goto LAB_02f7a204;
    }
    lVar7 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar3 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar5 = *pbVar6;
    if (7 < bVar5) goto LAB_02f7a1fc;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02f7a198;
      }
      goto LAB_02f7a1a4;
    }
LAB_02f7a204:
    bVar5 = *pbVar6;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar7 == 0) {
    plVar8 = (long *)0x0;
    bVar4 = false;
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x2e0);
    plVar8 = *(long **)(param_1 + 0x2e8);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if ((bVar9 != bVar5) && (plVar8 != (long *)0x0)) {
      plVar1 = (long *)(param_1 + 0x2e8);
      FUN_02f856b4(plVar1,lVar7,0);
      if (*plVar1 == 0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)0x0;
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0x4b0);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0x4b8);
    }
    else if (*(long **)(param_1 + 0x4b8) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0x4b8);
      FUN_02f856b4(plVar1,lVar7,1);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0x680);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0x688);
    }
    else if (*(long **)(param_1 + 0x688) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0x688);
      FUN_02f856b4(plVar1,lVar7,2);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0x850);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0x858);
    }
    else if (*(long **)(param_1 + 0x858) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0x858);
      FUN_02f856b4(plVar1,lVar7,3);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0xa20);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0xa28);
    }
    else if (*(long **)(param_1 + 0xa28) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0xa28);
      FUN_02f856b4(plVar1,lVar7,4);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0xbf0);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0xbf8);
    }
    else if (*(long **)(param_1 + 0xbf8) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0xbf8);
      FUN_02f856b4(plVar1,lVar7,5);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0xdc0);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0xdc8);
    }
    else if (*(long **)(param_1 + 0xdc8) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0xdc8);
      FUN_02f856b4(plVar1,lVar7,6);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar9 = *(byte *)(param_1 + 0xf90);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar5) {
      plVar8 = *(long **)(param_1 + 0xf98);
    }
    else if (*(long **)(param_1 + 0xf98) != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0xf98);
      FUN_02f856b4(plVar1,lVar7,7);
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x30) = 1;
        *plVar1 = 0;
      }
    }
    bVar4 = plVar8 != (long *)0x0;
    if ((plVar8 != (long *)0x0) && ((long *)(param_1 + 0x1168) == plVar8)) {
      bVar4 = true;
      goto LAB_02f7a52c;
    }
  }
  lVar7 = *(long *)(param_1 + 0x1168);
  if (((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) && (*(long **)(lVar7 + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar7 + 0x10) + 8))();
  }
  if (*(long **)(param_1 + 0x1170) == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x1168) = 0;
    *(undefined1 *)(param_1 + 0x1198) = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x1170) + 0x58))();
    *(undefined8 *)(param_1 + 0x1168) = 0;
    *(undefined1 *)(param_1 + 0x1198) = 0;
    if (*(long **)(param_1 + 0x1170) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1170) + 0x20))();
      *(undefined8 *)(param_1 + 0x1170) = 0;
    }
  }
LAB_02f7a52c:
  if ((!bVar4) || ((long *)(param_1 + 0x11a0) != plVar8)) {
    lVar7 = *(long *)(param_1 + 0x11a0);
    if ((lVar7 != 0) && ((*(long *)(lVar7 + 8) != 0 && (*(long **)(lVar7 + 0x10) != (long *)0x0))))
    {
      (**(code **)(**(long **)(lVar7 + 0x10) + 8))();
    }
    if (*(long **)(param_1 + 0x11a8) == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x11a0) = 0;
      *(undefined1 *)(param_1 + 0x11d0) = 0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x11a8) + 0x58))();
      *(undefined8 *)(param_1 + 0x11a0) = 0;
      *(undefined1 *)(param_1 + 0x11d0) = 0;
      if (*(long **)(param_1 + 0x11a8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x11a8) + 0x20))();
        *(undefined8 *)(param_1 + 0x11a8) = 0;
      }
    }
  }
  bVar2 = false;
  if ((long *)(param_1 + 0x11d8) == plVar8) {
    bVar2 = bVar4;
  }
  if (!bVar2) {
    lVar7 = *(long *)(param_1 + 0x11d8);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) && (*(long **)(lVar7 + 0x10) != (long *)0x0))
    {
      (**(code **)(**(long **)(lVar7 + 0x10) + 8))();
    }
    if (*(long **)(param_1 + 0x11e0) == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x11d8) = 0;
      *(undefined1 *)(param_1 + 0x1208) = 0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x11e0) + 0x58))();
      *(undefined8 *)(param_1 + 0x11d8) = 0;
      *(undefined1 *)(param_1 + 0x1208) = 0;
      if (*(long **)(param_1 + 0x11e0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x11e0) + 0x20))();
        *(undefined8 *)(param_1 + 0x11e0) = 0;
      }
    }
  }
  bVar2 = false;
  if ((long *)(param_1 + 0x1210) == plVar8) {
    bVar2 = bVar4;
  }
  if (!bVar2) {
    lVar7 = *(long *)(param_1 + 0x1210);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) && (*(long **)(lVar7 + 0x10) != (long *)0x0))
    {
      (**(code **)(**(long **)(lVar7 + 0x10) + 8))();
    }
    if (*(long **)(param_1 + 0x1218) == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x1210) = 0;
      *(undefined1 *)(param_1 + 0x1240) = 0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x1218) + 0x58))();
      *(undefined8 *)(param_1 + 0x1210) = 0;
      *(undefined1 *)(param_1 + 0x1240) = 0;
      if (*(long **)(param_1 + 0x1218) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x1218) + 0x20))();
        *(undefined8 *)(param_1 + 0x1218) = 0;
      }
    }
  }
  bVar2 = false;
  if ((long *)(param_1 + 0x1248) == plVar8) {
    bVar2 = bVar4;
  }
  if (!bVar2) {
    lVar7 = *(long *)(param_1 + 0x1248);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) && (*(long **)(lVar7 + 0x10) != (long *)0x0))
    {
      (**(code **)(**(long **)(lVar7 + 0x10) + 8))();
    }
    if (*(long **)(param_1 + 0x1250) == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x1248) = 0;
      *(undefined1 *)(param_1 + 0x1278) = 0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x1250) + 0x58))();
      *(undefined8 *)(param_1 + 0x1248) = 0;
      *(undefined1 *)(param_1 + 0x1278) = 0;
      if (*(long **)(param_1 + 0x1250) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x1250) + 0x20))();
        *(undefined8 *)(param_1 + 0x1250) = 0;
      }
    }
  }
  return;
}

