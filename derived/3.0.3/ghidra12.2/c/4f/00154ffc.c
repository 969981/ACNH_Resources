
int FUN_00154ffc(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = *param_1;
  bVar5 = (param_2 & 1) != 0;
  plVar1 = param_1 + 0x92;
  if (bVar5) {
    plVar1 = param_1 + 0x8f;
  }
  plVar2 = param_1 + 0x43;
  if (bVar5) {
    plVar2 = param_1 + 0x31;
  }
  puVar12 = (undefined8 *)*plVar2;
  plVar2 = param_1 + 0x42;
  if (bVar5) {
    plVar2 = param_1 + 0x30;
  }
  puVar11 = (undefined8 *)*plVar2;
  lVar3 = lVar10 + 0x1268;
  plVar2 = (long *)(lVar10 + 0x11e8);
  if (bVar5) {
    lVar3 = lVar10 + 0x1288;
    plVar2 = (long *)(lVar10 + 0x1228);
  }
  FUN_00143300(*plVar1);
  *plVar1 = 0;
  puVar4 = &DAT_0407ebb1;
  if (puVar11 != (undefined8 *)0x0) {
    puVar4 = puVar11;
  }
  puVar11 = &DAT_0407ebb1;
  if (puVar12 != (undefined8 *)0x0) {
    puVar11 = puVar12;
  }
  if (*plVar2 == 0) {
    bVar9 = *(byte *)(lVar3 + 0x18) & 0xfe;
LAB_0015516c:
    iVar6 = 0;
    *(byte *)(lVar3 + 0x18) = bVar9;
  }
  else {
    if (((*(byte *)(lVar3 + 0x18) >> 2 & 1) == 0) ||
       (pcVar7 = strchr(param_4,0x3f), pcVar7 == (char *)0x0)) {
      lVar8 = FUN_00143320(param_4);
    }
    else {
      lVar8 = FUN_00146120(&DAT_040a8d7d,(long)pcVar7 - (long)param_4,param_4);
    }
    if (lVar8 != 0) {
      local_70 = 0;
      local_68 = 0;
      iVar6 = FUN_00155740(lVar10,puVar4,puVar11,param_3,lVar8,plVar2,&local_68,&local_70);
      FUN_00143300(lVar8);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar7 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar7 = "";
      }
      lVar10 = FUN_00146120("%sAuthorization: Digest %s\r\n",pcVar7,local_68);
      *plVar1 = lVar10;
      FUN_00143300(local_68);
      if (*plVar1 != 0) {
        bVar9 = *(byte *)(lVar3 + 0x18) | 1;
        goto LAB_0015516c;
      }
    }
    iVar6 = 0x1b;
  }
  return iVar6;
}

