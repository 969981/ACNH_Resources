
int FUN_00179b90(long param_1,long *param_2,undefined4 param_3,char *param_4,long param_5,
                undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = 0;
  sVar6 = strlen(param_4);
  if (sVar6 - 0x1f1 < 0xfffffffffffffdff) {
    uVar8 = 4;
LAB_00179c70:
    FUN_0014d5f8(param_1,"Failed to encode DOH packet [%d]\n",uVar8);
    return 0x1b;
  }
  *(undefined4 *)((long)param_2 + 0x12) = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0x10000;
  *(undefined2 *)(param_2 + 2) = 0x100;
  plVar2 = param_2 + 3;
  *(undefined2 *)((long)param_2 + 0x16) = 0;
  pcVar7 = strchr(param_4,0x2e);
  while (pcVar7 != (char *)0x0) {
    uVar10 = (long)pcVar7 - (long)param_4;
    if (0x3f < uVar10) goto LAB_00179c68;
    *(char *)plVar2 = (char)uVar10;
    memcpy((undefined1 *)((long)plVar2 + 1),param_4,uVar10);
    plVar2 = (long *)((undefined1 *)((long)plVar2 + 1) + uVar10);
    param_4 = param_4 + uVar10 + 1;
    pcVar7 = strchr(param_4,0x2e);
  }
  sVar6 = strlen(param_4);
  if (0x3f < sVar6) {
LAB_00179c68:
    uVar8 = 1;
    param_2[0x42] = 0;
    goto LAB_00179c70;
  }
  lVar1 = (long)param_2 + 0xc;
  *(char *)plVar2 = (char)sVar6;
  memcpy((undefined1 *)((long)plVar2 + 1),param_4,sVar6);
  puVar3 = (undefined2 *)((undefined1 *)((long)plVar2 + 1) + sVar6);
  *puVar3 = 0;
  *(char *)(puVar3 + 1) = (char)param_3;
  *(undefined2 *)((long)puVar3 + 3) = 0x100;
  lVar9 = (long)puVar3 + (5 - lVar1);
  *(undefined4 *)(param_2 + 1) = param_3;
  param_2[0x44] = 0;
  param_2[0x42] = lVar9;
  param_2[0x43] = 0;
  if ((*(byte *)(param_1 + 0xf67) >> 1 & 1) == 0) {
    lVar9 = 0;
LAB_00179cfc:
    iVar4 = FUN_00157b2c(param_1,0,1);
    iVar5 = FUN_0014f684(&local_68);
    if ((((((iVar5 == 0) && (iVar5 = FUN_00174e0c(local_68,0x2712,param_5), iVar5 == 0)) &&
          (iVar5 = FUN_00174e0c(local_68,0x4e2b,FUN_0017a900), iVar5 == 0)) &&
         (iVar5 = FUN_00174e0c(local_68,0x2711,param_2 + 0x43), iVar5 == 0)) &&
        (((*(byte *)(param_1 + 0xf67) >> 1 & 1) != 0 ||
         ((iVar5 = FUN_00174e0c(local_68,0x271f,lVar1), iVar5 == 0 &&
          (iVar5 = FUN_00174e0c(local_68,0x3c,param_2[0x42]), iVar5 == 0)))))) &&
       ((iVar5 = FUN_00174e0c(local_68,0x2727,param_7), iVar5 == 0 &&
        (((iVar5 = FUN_00174e0c(local_68,0x54,4), iVar5 == 0 &&
          (iVar5 = FUN_00174e0c(local_68,0xb5,2), iVar5 == 0)) &&
         (iVar5 = FUN_00174e0c(local_68,0x9b,(long)iVar4), iVar5 == 0)))))) {
      uVar10 = *(ulong *)(param_1 + 0xf60);
      if (((uint)uVar10 >> 0x1a & 1) != 0) {
        iVar5 = FUN_00174e0c(local_68,0x29,1);
        if (iVar5 != 0) goto LAB_00179d88;
        uVar10 = *(ulong *)(param_1 + 0xf60);
      }
      if (((((((((((uVar10 >> 0x21 & 1) == 0) || (iVar5 = FUN_00174e0c(local_68,99,1), iVar5 == 0))
                && (((*(byte *)(param_1 + 0xb28) >> 1 & 1) == 0 ||
                    (iVar5 = FUN_00174e0c(local_68,0xe9,1), iVar5 == 0)))) &&
               (((*(byte *)(param_1 + 0xad0) >> 1 & 1) == 0 ||
                (iVar5 = FUN_00174e0c(local_68,0x51,2), iVar5 == 0)))) &&
              (((*(byte *)(param_1 + 3000) >> 1 & 1) == 0 ||
               (iVar5 = FUN_00174e0c(local_68,0xf9,2), iVar5 == 0)))) &&
             (((((*(byte *)(param_1 + 0xad0) & 1) == 0 ||
                (iVar5 = FUN_00174e0c(local_68,0x40,1), iVar5 == 0)) &&
               (((*(byte *)(param_1 + 3000) & 1) == 0 ||
                (iVar5 = FUN_00174e0c(local_68,0xf8,1), iVar5 == 0)))) &&
              (((*(byte *)(param_1 + 0xad0) >> 2 & 1) == 0 ||
               (iVar5 = FUN_00174e0c(local_68,0xe8,1), iVar5 == 0)))))) &&
            ((*(long *)(param_1 + 0xd80) == 0 || (iVar5 = FUN_00174e0c(local_68,0x2751), iVar5 == 0)
             ))) && (((((*(long *)(param_1 + 0xd88) == 0 ||
                        (iVar5 = FUN_00174e0c(local_68,0x2806), iVar5 == 0)) &&
                       ((*(long *)(param_1 + 0xd70) == 0 ||
                        (iVar5 = FUN_00174e0c(local_68,0x2771), iVar5 == 0)))) &&
                      (((*(long *)(param_1 + 0xd78) == 0 ||
                        (iVar5 = FUN_00174e0c(local_68,0x2807), iVar5 == 0)) &&
                       ((*(long *)(param_1 + 0xdd8) == 0 ||
                        (iVar5 = FUN_00174e0c(local_68,0x27b9), iVar5 == 0)))))) &&
                     ((((*(long *)(param_1 + 0xde0) == 0 ||
                        (iVar5 = FUN_00174e0c(local_68,0x2814), iVar5 == 0)) &&
                       (((*(byte *)(param_1 + 0xb28) & 1) == 0 ||
                        (iVar5 = FUN_00174e0c(local_68,0xac,1), iVar5 == 0)))) &&
                      ((*(long *)(param_1 + 0xdc8) == 0 ||
                       (iVar5 = FUN_00174e0c(local_68,0x275c), iVar5 == 0)))))))) &&
          ((*(long *)(param_1 + 0xdc0) == 0 || (iVar5 = FUN_00174e0c(local_68,0x275d), iVar5 == 0)))
          ) && ((((((*(byte *)(param_1 + 0xb28) >> 3 & 1) == 0 ||
                   (iVar5 = FUN_00174e0c(local_68,0xd8,2), iVar5 == 0)) &&
                  (((*(byte *)(param_1 + 0xc10) >> 3 & 1) == 0 ||
                   (iVar5 = FUN_00174e0c(local_68,0x105,2), iVar5 == 0)))) &&
                 ((*(long *)(param_1 + 0xaf0) == 0 ||
                  (iVar5 = FUN_00174e0c(local_68,0x4e8c), iVar5 == 0)))) &&
                ((*(long *)(param_1 + 0xaf8) == 0 ||
                 (iVar5 = FUN_00174e0c(local_68,0x277d), iVar5 == 0)))))) {
        *(code **)(local_68 + 0xf38) = FUN_0017a978;
        *(long *)(local_68 + 0xf40) = param_1;
        *param_2 = local_68;
        iVar5 = FUN_00147350(param_6);
        if (iVar5 == 0) {
          FUN_00143300(lVar9);
          return 0;
        }
        iVar5 = 0;
      }
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    iVar5 = FUN_00155ef4(param_1,lVar1,lVar9,&local_70,&local_78);
    if (iVar5 == 0) {
      lVar9 = FUN_00146120("%s?dns=%s",param_5,local_70);
      FUN_00143300(local_70);
      if (lVar9 != 0) {
        param_5 = lVar9;
        goto LAB_00179cfc;
      }
      iVar5 = 0x1b;
    }
    lVar9 = 0;
  }
LAB_00179d88:
  FUN_00143300(lVar9);
  FUN_0014f260(local_68);
  return iVar5;
}

