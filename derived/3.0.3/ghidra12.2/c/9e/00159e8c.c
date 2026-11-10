
size_t FUN_00159e8c(long *param_1,undefined8 param_2,void *param_3,ulong param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  int local_34;
  
  lVar8 = *param_1;
  plVar1 = param_1 + 0xae;
  local_34 = 0;
  lVar7 = *(long *)(lVar8 + 0x1e8);
  iVar2 = FUN_0015a82c(plVar1);
  if (iVar2 != 0) {
LAB_00159ed0:
    local_34 = 0x10;
    goto LAB_00159ed4;
  }
  *(undefined8 *)(lVar7 + 0x278) = 0;
  *(undefined8 *)(lVar7 + 0x270) = 0;
  if (*(char *)(lVar7 + 0x21c) != '\0') {
    uVar5 = *(ulong *)(lVar7 + 0x228);
    uVar6 = (*(long **)(lVar7 + 0x220))[2];
    sVar9 = uVar6 - uVar5;
    if (uVar5 <= uVar6 && sVar9 != 0) {
      if (param_4 <= sVar9) {
        sVar9 = param_4;
      }
      memcpy(param_3,(void *)(**(long **)(lVar7 + 0x220) + uVar5),sVar9);
      *(size_t *)(lVar7 + 0x228) = *(long *)(lVar7 + 0x228) + sVar9;
      return sVar9;
    }
  }
  if ((*(long *)(lVar8 + 0x1540) == 0) || (*(size_t *)(lVar7 + 0x268) == 0)) {
    if (*(void **)(lVar7 + 0x240) != (void *)0x0) {
      sVar9 = *(ulong *)(lVar7 + 0x248);
      if (param_4 <= *(ulong *)(lVar7 + 0x248)) {
        sVar9 = param_4;
      }
      memcpy(param_3,*(void **)(lVar7 + 0x240),sVar9);
      *(size_t *)(lVar7 + 0x240) = *(long *)(lVar7 + 0x240) + sVar9;
      *(size_t *)(lVar7 + 0x248) = *(long *)(lVar7 + 0x248) - sVar9;
      FUN_0014d430(lVar8,"%zd data bytes written\n",sVar9);
      if (*(long *)(lVar7 + 0x248) != 0) {
        return sVar9;
      }
      *(undefined4 *)(param_1 + 0xbf) = 0;
      *(undefined8 *)(lVar7 + 0x240) = 0;
      *(undefined8 *)(lVar7 + 0x248) = 0;
      iVar2 = FUN_0015992c(param_1,plVar1,&local_34);
      if (iVar2 == 0) {
        return sVar9;
      }
      goto LAB_00159ed4;
    }
    if ((int)param_1[0xbf] == 0) {
      *(void **)(lVar7 + 600) = param_3;
      *(ulong *)(lVar7 + 0x260) = param_4;
      *(undefined8 *)(lVar7 + 0x268) = 0;
      if (param_1[0xbd] != 0) {
        uVar5 = param_1[0xbd] - param_1[0xbe];
        lVar4 = param_1[0xbc] + param_1[0xbe];
LAB_0015a074:
        uVar6 = FUN_0016f5e4(*plVar1,lVar4,uVar5);
        iVar2 = FUN_0016bcc8();
        if (iVar2 != 0) {
          uVar3 = FUN_001686c8(uVar6 & 0xffffffff);
          FUN_0014d5f8(lVar8,"nghttp2_session_mem_recv() returned %zd:%s\n",uVar6,uVar3);
          local_34 = 0x38;
          goto LAB_00159ed4;
        }
        if (uVar5 == uVar6) {
          param_1[0xbd] = 0;
          param_1[0xbe] = 0;
        }
        else {
          param_1[0xbe] = param_1[0xbe] + uVar6;
        }
        iVar2 = FUN_0015a79c(lVar8,*plVar1);
        if (iVar2 != 0) {
          local_34 = 0x37;
          goto LAB_00159ed4;
        }
        iVar2 = FUN_0015a82c(plVar1);
        if (iVar2 != 0) goto LAB_00159ed0;
        goto LAB_00159f94;
      }
      uVar5 = (*(code *)param_1[0xbb])(param_1,0,param_1[0xbc],0x8000,&local_34);
      if (uVar5 == 0) {
        *param_5 = 0;
        return 0;
      }
      if (uVar5 != 0xffffffffffffffff) {
        lVar4 = param_1[0xbc];
        param_1[0xbd] = uVar5;
        goto LAB_0015a074;
      }
      if (local_34 != 0x51) {
        FUN_0014d5f8(lVar8,"Failed receiving HTTP2 data");
        goto LAB_00159ed4;
      }
      goto LAB_0015a10c;
    }
  }
  else {
    if (*(void **)(lVar7 + 600) != param_3) {
      memmove(param_3,*(void **)(lVar7 + 600),*(size_t *)(lVar7 + 0x268));
      *(void **)(lVar7 + 600) = param_3;
      *(ulong *)(lVar7 + 0x260) = param_4 - *(long *)(lVar7 + 0x268);
    }
    if (((int)param_1[0xbf] == *(int *)(lVar7 + 0x218)) && (*(long *)(lVar7 + 0x240) == 0)) {
      *(undefined4 *)(param_1 + 0xbf) = 0;
      iVar2 = FUN_0015992c(param_1,plVar1,&local_34);
      if (iVar2 != 0) goto LAB_00159ed4;
    }
LAB_00159f94:
    sVar9 = *(size_t *)(lVar7 + 0x268);
    if (sVar9 != 0) {
      *(undefined8 *)(lVar7 + 0x268) = 0;
      if ((int)param_1[0xbf] == *(int *)(lVar7 + 0x218)) {
        return sVar9;
      }
      if (*(char *)(lVar7 + 0x250) == '\0') {
        param_1[0xc0] = param_1[0xc0] - *(long *)(lVar8 + 0x1540);
        *(undefined8 *)(lVar8 + 0x1540) = 0;
        return sVar9;
      }
      return sVar9;
    }
LAB_0015a10c:
    if (*(char *)(lVar7 + 0x250) != '\0') {
      sVar9 = FUN_0015b6f0(param_1,lVar8,lVar7,param_5);
      return sVar9;
    }
  }
  local_34 = 0x51;
LAB_00159ed4:
  *param_5 = local_34;
  return 0xffffffffffffffff;
}

