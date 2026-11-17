
void FUN_0312f010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char *__src;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined **local_90;
  char *local_88;
  undefined4 local_80;
  char local_7c [63];
  undefined1 local_3d;
  long local_38;
  
  plVar1 = *(long **)(param_1 + 0x58);
  local_38 = 0;
  if (((plVar1 == (long *)0x0) || ((**(code **)(*plVar1 + 0x28))(plVar1,&local_38), local_38 == 0))
     || (*(long *)(local_38 + 0xb8) == 0)) {
    __src = (char *)0x0;
  }
  else {
    __src = (char *)FUN_00364d70((long *)(local_38 + 0xb8),"NoticeText");
    local_88 = local_7c;
    local_3d = 0;
    local_80 = 0x40;
    if (local_88 == __src) goto LAB_0312f128;
  }
  local_90 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
  local_3d = 0;
  local_80 = 0x40;
  local_88 = local_7c;
  lVar6 = 0;
  do {
    if (__src[lVar6] == '\0') {
LAB_0312f104:
      iVar5 = (int)lVar6;
joined_r0x0312f108:
      if (0x3f < iVar5) {
        iVar5 = 0x3f;
      }
      goto LAB_0312f110;
    }
    if (__src[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0312f104;
    }
    if (__src[lVar6 + 2] == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x0312f108;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar5 = 0;
LAB_0312f110:
  memcpy(local_88,__src,(long)iVar5);
  local_7c[iVar5] = '\0';
  __src = local_88;
LAB_0312f128:
  local_90 = &PTR_LAB_048fb9f8;
  if (*__src != '\0') {
    uVar2 = FUN_03462740(param_1,param_2,&local_90);
    *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  }
  lVar6 = DAT_05ae7600;
  if (*(long *)(param_1 + 0x250) == 0) {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0x20);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar6 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x20,8);
    }
    puVar4[2] = puVar4 + 1;
    puVar4[3] = 0x20800000000;
    *puVar4 = &PTR_LAB_04b2b230;
    puVar4[1] = puVar4 + 1;
    *(undefined8 **)(param_1 + 0x250) = puVar4;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

