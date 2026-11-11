
void FUN_004453e0(long *param_1,ulong *param_2,int param_3,ulong param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  void *pvVar5;
  undefined2 *puVar6;
  undefined1 *__src;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  char *pcVar10;
  void *__dest;
  undefined1 local_54 [16];
  undefined1 local_44 [4];
  
  if (param_3 < 1) {
LAB_00445454:
    if ((char *)param_1[5] != (char *)0x0) {
      sVar9 = strlen((char *)param_1[5]);
      pvVar5 = (void *)*param_2;
      if (param_2[1] < sVar9 + (long)pvVar5) {
        pvVar5 = (void *)FUN_00446370(param_2,sVar9);
      }
      else {
        *param_2 = sVar9 + (long)pvVar5;
      }
      if (pvVar5 != (void *)0x0) {
        memcpy(pvVar5,(void *)param_1[5],sVar9);
      }
      iVar4 = FUN_0043a120(local_54,0x10," (%d)",(int)param_1[6]);
      sVar9 = (size_t)iVar4;
      pvVar5 = (void *)*param_2;
      if (param_2[1] < (long)pvVar5 + sVar9) {
        pvVar5 = (void *)FUN_00446370(param_2,sVar9);
      }
      else {
        *param_2 = (long)pvVar5 + sVar9;
      }
      if (pvVar5 == (void *)0x0) {
        local_44[0] = 0;
        pvVar5 = (void *)*param_2;
        uVar8 = (long)pvVar5 + 1;
        __src = local_44;
        if (uVar8 <= param_2[1]) goto LAB_00445534;
        goto LAB_004458a0;
      }
      memcpy(pvVar5,local_54,sVar9);
      local_54[0] = 0x3a;
      pvVar5 = (void *)((long)*param_2 + 1);
      if ((void *)param_2[1] < pvVar5) {
        FUN_004462a0(param_2,local_54,1);
        pvVar5 = (void *)*param_2;
      }
      else {
        memcpy((void *)*param_2,local_54,1);
        *param_2 = (ulong)pvVar5;
      }
      local_54[0] = 0x20;
      if (param_2[1] < (long)pvVar5 + 1U) {
        FUN_004462a0(param_2,local_54,1);
      }
      else {
        memcpy(pvVar5,local_54,1);
        *param_2 = (long)pvVar5 + 1U;
      }
    }
    pcVar10 = *(char **)(*(long *)(PTR_DAT_04bd8018 + 0x18) + (ulong)*(byte *)(param_1 + 1) * 8);
    sVar9 = strlen(pcVar10);
    pvVar5 = (void *)*param_2;
    uVar8 = sVar9 + 2 + (long)pvVar5;
    if (param_2[1] < uVar8) {
      pvVar5 = (void *)FUN_00446370(param_2);
    }
    else {
      *param_2 = uVar8;
    }
    if (pvVar5 != (void *)0x0) {
      memcpy(pvVar5,pcVar10,sVar9);
      *(undefined2 *)((long)pvVar5 + sVar9) = 0x203a;
      pcVar10 = (char *)(param_1[3] & 0xfffffffffffffffe);
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        uVar8 = (long)*param_2 + 0xc;
        if (param_2[1] < uVar8) {
          FUN_004462a0(param_2,"<empty text>",0xc);
          iVar4 = *(int *)((long)param_1 + 0xc);
        }
        else {
          memcpy((void *)*param_2,"<empty text>",0xc);
          *param_2 = uVar8;
          iVar4 = *(int *)((long)param_1 + 0xc);
        }
      }
      else {
        sVar9 = strlen(pcVar10);
        uVar8 = sVar9 + (long)*param_2;
        if (param_2[1] < uVar8) {
          FUN_004462a0(param_2,pcVar10);
          iVar4 = *(int *)((long)param_1 + 0xc);
        }
        else {
          memcpy((void *)*param_2,pcVar10,sVar9);
          *param_2 = uVar8;
          iVar4 = *(int *)((long)param_1 + 0xc);
        }
      }
      if (iVar4 != 0) {
        puVar6 = (undefined2 *)*param_2;
        if (param_2[1] < (long)puVar6 + 0xbU) {
          puVar6 = (undefined2 *)FUN_00446370(param_2,0xb);
        }
        else {
          *param_2 = (long)puVar6 + 0xbU;
        }
        if (puVar6 == (undefined2 *)0x0) goto LAB_00445888;
        uVar1 = *(uint *)((long)param_1 + 0xc);
        *puVar6 = 0x5b20;
        uVar2 = (&DAT_04101e60)[(ulong)(uVar1 >> 0x18) & 0xf];
        *(undefined *)(puVar6 + 1) = (&DAT_04101e60)[uVar1 >> 0x1c];
        *(undefined1 *)((long)puVar6 + 3) = uVar2;
        *(undefined *)(puVar6 + 2) = (&DAT_04101e60)[(ulong)(uVar1 >> 0x14) & 0xf];
        uVar2 = (&DAT_04101e60)[(ulong)(uVar1 >> 0xc) & 0xf];
        *(undefined *)((long)puVar6 + 5) = (&DAT_04101e60)[(ulong)(uVar1 >> 0x10) & 0xf];
        uVar3 = (&DAT_04101e60)[(ulong)(uVar1 >> 8) & 0xf];
        *(undefined1 *)(puVar6 + 3) = uVar2;
        *(undefined1 *)((long)puVar6 + 7) = uVar3;
        *(undefined *)(puVar6 + 4) = (&DAT_04101e60)[(ulong)(uVar1 >> 4) & 0xf];
        *(undefined *)((long)puVar6 + 9) = (&DAT_04101e60)[(ulong)uVar1 & 0xf];
        *(undefined1 *)(puVar6 + 5) = 0x5d;
      }
      lVar7 = *param_1;
      if ((*(byte *)(lVar7 + 0x52) & 1) == 0) {
        lVar7 = *(long *)(lVar7 + 0x58);
      }
      pcVar10 = *(char **)(lVar7 + 0x58);
      if (pcVar10 != (char *)0x0) {
        local_54[0] = 0x20;
        pvVar5 = (void *)((long)*param_2 + 1);
        if ((void *)param_2[1] < pvVar5) {
          FUN_004462a0(param_2,local_54,1);
          pvVar5 = (void *)*param_2;
        }
        else {
          memcpy((void *)*param_2,local_54,1);
          *param_2 = (ulong)pvVar5;
        }
        local_54[0] = 0x5b;
        __dest = (void *)((long)pvVar5 + 1);
        if ((void *)param_2[1] < __dest) {
          FUN_004462a0(param_2,local_54,1);
          __dest = (void *)*param_2;
        }
        else {
          memcpy(pvVar5,local_54,1);
          *param_2 = (ulong)__dest;
        }
        sVar9 = strlen(pcVar10);
        pvVar5 = (void *)(sVar9 + (long)__dest);
        if ((void *)param_2[1] < pvVar5) {
          FUN_004462a0(param_2,pcVar10);
          pvVar5 = (void *)*param_2;
        }
        else {
          memcpy(__dest,pcVar10,sVar9);
          *param_2 = (ulong)pvVar5;
        }
        local_54[0] = 0x5d;
        if (param_2[1] < (long)pvVar5 + 1U) {
          FUN_004462a0(param_2,local_54,1);
        }
        else {
          memcpy(pvVar5,local_54,1);
          *param_2 = (long)pvVar5 + 1U;
        }
      }
      local_54[0] = 10;
      uVar8 = (long)*param_2 + 1;
      if (param_2[1] < uVar8) {
        FUN_004462a0(param_2,local_54,1);
      }
      else {
        memcpy((void *)*param_2,local_54,1);
        *param_2 = uVar8;
      }
      if (((param_4 & 1) != 0) && (param_1[7] != 0)) {
        FUN_00444760(param_1[7],param_2);
      }
    }
  }
  else {
    pvVar5 = (void *)*param_2;
    if (0x4c < param_3) {
      param_3 = 0x4d;
    }
    sVar9 = (size_t)param_3;
    if (param_2[1] < (long)pvVar5 + sVar9) {
      pvVar5 = (void *)FUN_00446370(param_2,sVar9);
    }
    else {
      *param_2 = (long)pvVar5 + sVar9;
    }
    if (pvVar5 != (void *)0x0) {
      memset(pvVar5,0x20,sVar9);
      goto LAB_00445454;
    }
  }
LAB_00445888:
  local_54[0] = 0;
  pvVar5 = (void *)*param_2;
  uVar8 = (long)pvVar5 + 1;
  __src = local_54;
  if (uVar8 <= param_2[1]) {
LAB_00445534:
    memcpy(pvVar5,__src,1);
    *param_2 = uVar8;
    return;
  }
LAB_004458a0:
  FUN_004462a0(param_2,__src,1);
  return;
}

