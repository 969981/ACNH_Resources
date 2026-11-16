
void FUN_026a5740(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **appuStack_40a8 [2];
  undefined8 local_4098;
  undefined8 uStack_4090;
  undefined8 local_4088;
  undefined8 ***local_4080;
  undefined8 ***local_4078;
  undefined4 local_4070;
  undefined1 *local_4068;
  undefined1 *local_4060;
  undefined4 local_4058;
  undefined1 local_4050 [112];
  long alStack_3fe0 [2023];
  undefined8 local_a8;
  undefined8 local_70;
  
  local_4080 = &local_4080;
  local_4070 = 0;
  pppuVar8 = &local_4078;
  local_4068 = local_4050;
  lVar6 = 0x123;
  plVar5 = alStack_3fe0;
  do {
    plVar5[-7] = (long)plVar5;
    plVar5[-0xe] = (long)(plVar5 + -7);
    lVar6 = lVar6 + -3;
    *plVar5 = (long)(plVar5 + 7);
    plVar5 = plVar5 + 0x15;
  } while (lVar6 != 0);
  local_4058 = 0x124;
  local_a8 = 0;
  local_70 = CONCAT44(local_70._4_4_,2);
  local_4078 = local_4080;
  local_4060 = local_4068;
  FUN_02694fe0(param_1,&local_4080,param_4,&local_70,param_6,param_2);
  if ((undefined8 ****)local_4078 != &local_4080) {
    iVar4 = 0;
    pppuVar7 = local_4078 + -5;
    pppuVar3 = local_4078;
    do {
      piVar1 = (int *)((long)pppuVar7 + 4);
      pppuVar3 = (undefined8 ***)pppuVar3[1];
      pppuVar7 = pppuVar3 + -5;
      if (*piVar1 < 2) {
        iVar4 = iVar4 + 1;
      }
    } while (pppuVar7 != appuStack_40a8);
    if (iVar4 != 0) {
      lVar6 = 0;
      local_4098 = param_4;
      uStack_4090 = param_5;
      local_4088 = param_6;
      do {
        lVar2 = param_3 + lVar6;
        if ((*(short *)(lVar2 + 0x14) == -2) || ((int)*(char *)(lVar2 + 0x1f) - 2U < 4)) {
          local_70 = 0xfffe;
          FUN_0277d4ac(&local_70);
          *(undefined2 *)(lVar2 + 0x14) = (undefined2)local_70;
          *(undefined2 *)(lVar2 + 0x16) = local_70._2_2_;
          *(undefined4 *)(lVar2 + 0x18) = local_70._4_4_;
          *(undefined4 *)(lVar2 + 0x1c) = 0xffff;
        }
        lVar6 = lVar6 + 0xc;
      } while (lVar6 != 0x1b0);
      FUN_027cdae0(param_3);
      FUN_026a7180(param_1,param_2,param_3,local_4098,uStack_4090,local_4088);
    }
  }
  do {
    pppuVar3 = (undefined8 ***)*pppuVar8;
    pppuVar8 = pppuVar3 + 1;
  } while ((undefined8 ****)pppuVar3 != &local_4080);
  return;
}

