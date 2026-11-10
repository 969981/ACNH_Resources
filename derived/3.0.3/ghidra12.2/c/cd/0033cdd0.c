
undefined8
FUN_0033cdd0(long param_1,long *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,undefined8 param_8,undefined8 param_9,long param_10,
            undefined4 param_11)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_6 < param_7) {
    pcVar1 = "The maxParticleCount must be larger than the maxEmitCountPerFrame.\n";
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x198) + (long)param_4 * 8);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 9) == '\0')) {
      FUN_0032c410("ResourceID: %d does not exist.\n",param_4);
      return 0;
    }
    uVar3 = FUN_00333cc0(lVar2,param_3);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_0033cbec(param_1,param_2,param_3,param_4,param_5,param_6,0);
      if ((((uVar3 & 1) != 0) && (*param_2 != 0)) && ((int)param_2[1] == *(int *)(*param_2 + 0x34)))
      {
        lVar2 = FUN_00322a20(param_2);
        *(undefined1 *)(lVar2 + 0x1e) = 1;
        lVar2 = FUN_00322a20(param_2);
        *(undefined8 *)(lVar2 + 0x260) = param_8;
        lVar2 = FUN_00322a20(param_2);
        *(int *)(lVar2 + 0x268) = param_7;
        lVar2 = FUN_00322a20(param_2);
        *(undefined4 *)(lVar2 + 0x270) = param_11;
        if (param_10 != 0) {
          uVar4 = FUN_00322a20(param_2);
          FUN_00322a00(uVar4,param_10);
        }
        lVar2 = FUN_00322a20(param_2);
        lVar2 = *(long *)(lVar2 + 0x160);
        if (lVar2 == 0) {
          return 1;
        }
        do {
          if (*(char *)(*(long *)(*(long *)(lVar2 + 0x240) + 0x10) + 0x793) != '\x01') {
            lVar6 = *(long *)(lVar2 + 0xa0);
            lVar5 = FUN_00322a20(param_2);
            FUN_0032c410("\"Particle Follow Type\" of the manual emitter should be \"Do not follow emitter\". Please change the setting of the %s in the %s.eset.\n"
                         ,lVar6 + 0x10,*(long *)(*(long *)(lVar5 + 0x248) + 0x10) + 0x10);
          }
          lVar2 = *(long *)(lVar2 + 0x80);
        } while (lVar2 != 0);
        return 1;
      }
      pcVar1 = "CreateEmitterSetId has failed.\n";
    }
    else {
      pcVar1 = "Manual EmitterSet must not have Child Emitters.\n";
    }
  }
  FUN_0032c410(pcVar1);
  return 0;
}

