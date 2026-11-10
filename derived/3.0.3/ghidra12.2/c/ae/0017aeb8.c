
undefined8 * FUN_0017aeb8(long param_1,int param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_3 == 0) {
    puVar2 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_0017acd4(0,0);
    lVar3 = puVar2[4];
    if ((param_1 < lVar3) || ((param_1 <= lVar3 && (param_2 < *(int *)(puVar2 + 5))))) {
      puVar4 = puVar2;
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)puVar2[2];
      if (puVar4 == puVar2) {
        puVar4 = (undefined8 *)puVar2[1];
      }
      else {
        uVar1 = puVar2[5];
        puVar4[4] = puVar2[4];
        puVar4[5] = uVar1;
        puVar4[1] = puVar2[1];
        *puVar4 = *puVar2;
        puVar4[3] = puVar2[3];
        *(undefined8 **)(puVar2[3] + 0x10) = puVar4;
      }
    }
  }
  *param_4 = (long)puVar2;
  return puVar4;
}

