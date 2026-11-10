
void FUN_002c6d60(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_f0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_44;
  
  plVar1 = param_3 + 1;
  iVar3 = FUN_002b43fc(plVar1);
  if (iVar3 == 0) {
    local_c8 = 0;
    local_d0 = 0x40000;
    (**(code **)(*param_3 + 0x10))(param_3,&local_d0);
    local_d0 = CONCAT44(local_d0._4_4_,0x10c07);
    goto LAB_002c7118;
  }
  local_c8 = 0;
  local_d0 = 0x40000;
  (**(code **)(*param_3 + 0x10))(param_3,&local_d0);
  lVar5 = param_2 + 0x50;
  uVar4 = FUN_002b440c(lVar5);
  if (((((uVar4 & 1) != 0) && (uVar4 = FUN_002b440c(plVar1), (uVar4 & 1) != 0)) &&
      (uVar4 = FUN_002b44c4(plVar1), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_002b4470(plVar1,lVar5), (uVar4 & 1) == 0)) {
    FUN_002b4018(&local_d0,lVar5);
    lVar5 = FUN_002b4368(&local_d0);
    uVar2 = *(undefined2 *)(lVar5 + 0x18);
    local_f0 = PTR_DAT_04bccf70 + 0x10;
    FUN_0021f5a0(&local_f0,0x7f000001);
    local_d8 = uVar2;
    FUN_002b44e4(&local_d0,&local_f0);
    FUN_0021f584(&local_f0);
    for (lVar5 = *(long *)(param_2 + 0x1e0); lVar5 != param_2 + 0x1d8; lVar5 = *(long *)(lVar5 + 8))
    {
      lVar6 = lVar5 + 0x18;
      uVar4 = FUN_002b449c(lVar6,plVar1);
      if ((((uVar4 & 1) == 0) && (uVar4 = FUN_002b4470(lVar6,plVar1), (uVar4 & 1) != 0)) &&
         ((uVar4 = FUN_002b44d4(lVar6), (uVar4 & 1) == 0 &&
          (uVar4 = FUN_002b440c(lVar6), (uVar4 & 1) != 0)))) goto LAB_002c6f5c;
    }
    if (((*(char *)(param_2 + 0x17c9) != '\0') || (*(char *)(param_2 + 0x17ca) != '\0')) ||
       (*(char *)(param_2 + 0x17c8) != '\0')) {
      for (lVar5 = *(long *)(param_2 + 400); lVar5 != param_2 + 0x188; lVar5 = *(long *)(lVar5 + 8))
      {
        lVar6 = lVar5 + 0x18;
        iVar3 = FUN_002b43fc(lVar6);
        if ((((iVar3 == *(int *)(param_2 + 0x17d0)) &&
             (uVar4 = FUN_002b449c(lVar6,plVar1), (uVar4 & 1) == 0)) &&
            (uVar4 = FUN_002b4470(lVar6,plVar1), (uVar4 & 1) != 0)) &&
           ((uVar4 = FUN_002b44d4(lVar6), (uVar4 & 1) == 0 &&
            (uVar4 = FUN_002b440c(lVar6), (uVar4 & 1) != 0)))) {
LAB_002c6f5c:
          FUN_002c37a0(*(undefined8 *)(param_2 + 0x1868),plVar1,&local_d0,0,0);
          local_44 = 0;
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x2c18);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_f0 + 4),(Result *)&local_44);
          FUN_002296c4(param_1,&local_f0);
          FUN_002b4104(&local_d0);
          return;
        }
      }
    }
    FUN_002b4104(&local_d0);
  }
  if ((((*(char *)(param_2 + 0x17c9) == '\0') && (*(char *)(param_2 + 0x17ca) == '\0')) &&
      (*(char *)(param_2 + 0x17c8) == '\0')) ||
     (iVar3 = FUN_002b43fc(plVar1), iVar3 != *(int *)(param_2 + 0x17d0))) {
    if (*(int *)(param_2 + 0x200) != 0) {
      lVar6 = FUN_002237a8(param_2 + 0x1f0);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = lVar6 - *(int *)(param_2 + 0x204);
      }
      lVar6 = lVar5 + 0x10;
      FUN_002cb338(lVar6);
      FUN_002236bc(param_2 + 0x1d8,param_2 + 0x1d8,lVar5);
      goto LAB_002c7070;
    }
  }
  else {
    FUN_002c714c(param_2,plVar1,1);
    if (*(int *)(param_2 + 0x200) != 0) {
      lVar6 = FUN_002237a8(param_2 + 0x1f0);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = lVar6 - *(int *)(param_2 + 0x204);
      }
      lVar6 = lVar5 + 0x10;
      FUN_002cb338(lVar6);
      FUN_002236e0(param_2 + 0x1d8,param_2 + 0x1d8,lVar5);
LAB_002c7070:
      FUN_002b415c(lVar6 + 8,plVar1);
      *(short *)(lVar6 + 0x88) = (short)param_3[0x11];
      *(long *)(lVar6 + 0x90) = param_3[0x12];
      *(long *)(lVar6 + 0x98) = param_3[0x13];
      if ((char)param_3[0x11] != '\0') {
        if (*(int *)(param_2 + 0x250) == 0) goto LAB_002c7108;
        lVar6 = FUN_002237a8(param_2 + 0x240);
        lVar5 = 0;
        if (lVar6 != 0) {
          lVar5 = lVar6 - *(int *)(param_2 + 0x254);
        }
        FUN_002cb338(lVar5 + 0x10);
        FUN_002236bc(param_2 + 0x228,param_2 + 0x228,lVar5);
        FUN_002b415c(lVar5 + 0x18,plVar1);
        *(short *)(lVar5 + 0x98) = (short)param_3[0x11];
        *(long *)(lVar5 + 0xa0) = param_3[0x12];
        *(long *)(lVar5 + 0xa8) = param_3[0x13];
      }
      *(undefined8 *)(param_2 + 0x17b8) = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      goto LAB_002c7118;
    }
  }
LAB_002c7108:
  local_d0 = CONCAT44(local_d0._4_4_,0xc10);
LAB_002c7118:
  local_f0 = (undefined *)((ulong)local_f0._4_4_ << 0x20);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_d0 + 4),(Result *)&local_f0);
  FUN_002296c4(param_1,&local_d0);
  return;
}

