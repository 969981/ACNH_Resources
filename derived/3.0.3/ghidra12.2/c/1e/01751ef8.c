
void FUN_01751ef8(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char *__dest;
  
  FUN_0073a490();
  __dest = *(char **)(param_1 + 0x60);
  if (__dest != "HumanToolActorLook") {
    iVar1 = 0x12;
    if (*(int *)(param_1 + 0x68) < 0x13) {
      iVar1 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(__dest,"HumanToolActorLook",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  lVar2 = DAT_05ae7600;
  if (*(long *)(param_1 + 0x1190) == 0) {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0xc);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar4 = (undefined8 *)(lVar2 + 8);
        if (lVar3 != 0) {
          puVar4 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_3 = (long *)*puVar4;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0xc,8);
    }
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0xffffffffffffffff;
      *(undefined4 *)(puVar4 + 1) = 0xffffffff;
      *(undefined8 **)(param_1 + 0x1190) = puVar4;
      *(undefined4 *)(param_1 + 0x1188) = 3;
    }
  }
  return;
}

