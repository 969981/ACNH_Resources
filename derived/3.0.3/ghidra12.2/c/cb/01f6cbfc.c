
void FUN_01f6cbfc(long param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x136d8) == '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 0x4b8) == 0) {
      return;
    }
    if (*(int *)(lVar4 + 0x378) != 0x23) {
      return;
    }
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0xc);
    if ((*(int *)(lVar4 + 0x360) == 0xc) && (*(int *)(*(long *)(lVar4 + 0x370) + 8) == 0x47)) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar5 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_052461c0);
          puVar5 = &DAT_05240280;
          if (iVar1 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar5 = &DAT_05240280;
        }
      }
      local_34 = 0;
      local_48 = (undefined *)CONCAT44(local_48._4_4_,0xd);
      if (puVar5[0x227] == 0) {
        return;
      }
      uVar2 = FUN_03850890(puVar5[0x227],0xd,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x13648);
    if (iVar1 == 0) {
      uVar2 = FUN_01f69f70(param_1,1);
      if ((uVar2 & 1) == 0) goto LAB_01f6cdf8;
      iVar1 = 0x1e;
    }
    *(int *)(param_1 + 0x13648) = iVar1 + -1;
    lVar4 = *(long *)(param_1 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 0x370) + 8);
    if (iVar1 == 0x49) {
      *(int *)(param_1 + 0x136c0) = *(int *)(param_1 + 0x136c0) + 1;
    }
    if (*(int *)(lVar4 + 0x4b8) == 0) {
      return;
    }
    if (*(int *)(lVar4 + 0x378) != 0x23) {
      return;
    }
    iVar3 = *(int *)(*(long *)(lVar4 + 0x370) + 8);
    if (iVar3 == 0x47) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar5 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          local_48._0_4_ = iVar1;
          iVar1 = __cxa_guard_acquire(&DAT_052461c0);
          puVar5 = &DAT_05240280;
          if (iVar1 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar5 = &DAT_05240280;
        }
      }
      local_34 = 0;
      local_48._0_4_ = 0xd;
      if (puVar5[0x227] == 0) {
        lVar4 = *(long *)(param_1 + 0x10);
      }
      else {
        uVar2 = FUN_03850890(puVar5[0x227],0xd,0,0);
        lVar4 = *(long *)(param_1 + 0x10);
        if ((uVar2 & 1) != 0) {
          local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
          local_34 = 0;
          FUN_01e5a930(0x40000000,lVar4,0xc,PTR_DAT_04bb2150,&local_48,&local_34,PTR_DAT_04bc1600,6)
          ;
          *(undefined4 *)(lVar4 + 0x3ac) = 0x49;
          *(undefined4 *)(param_1 + 0x136c0) = 0;
          return;
        }
      }
      iVar3 = *(int *)(*(long *)(lVar4 + 0x370) + 8);
    }
    local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar3);
    if (iVar3 != 0x49) {
      return;
    }
    if (*(int *)(param_1 + 0x136c0) < 0x192) {
      return;
    }
  }
LAB_01f6cdf8:
  FUN_01e6648c(param_1,0x7a,0,1);
  if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ApproachUpdateStop";
    FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_48,1);
  }
  if (*(char *)(param_1 + 0x13716) != '\0') {
    *(undefined1 *)(param_1 + 0x13716) = 0;
  }
  *(undefined4 *)(param_1 + 0x1367c) = 0xffffffff;
  return;
}

