
void FUN_00227af0(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *__s2;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  
  local_34 = local_34 & 0xffffffff00000000;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_34 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  __s2 = *(byte **)(param_3 + 8);
  if ((((void *)param_2[1] == (void *)0x0) == (__s2 == (byte *)0x0)) &&
     ((int)param_2[3] == *(int *)(param_3 + 0x18))) {
    uVar1 = *(uint *)((long)param_2 + 0x14);
    if (uVar1 == *(uint *)(param_3 + 0x14)) {
      if ((uVar1 == 0) || (iVar3 = memcmp((void *)param_2[1],__s2,(ulong)uVar1), iVar3 == 0))
      goto LAB_00227c7c;
      __s2 = *(byte **)(param_3 + 8);
    }
  }
  if (__s2 != (byte *)0x0) {
    uVar1 = *(uint *)(param_3 + 0x14);
    if (uVar1 != 0) {
      if (*(int *)(param_3 + 0x18) == 1) {
        bVar2 = *__s2;
        if (bVar2 != 0) {
          uVar4 = 0;
          pbVar5 = __s2;
          do {
            if ((char)bVar2 < '\0') {
              if ((byte)(bVar2 + 0x3e) < 0x1e) {
                lVar6 = 2;
              }
              else if ((bVar2 & 0xf0) == 0xe0) {
                lVar6 = 3;
              }
              else if ((bVar2 & 0xf8) == 0xf0) {
                lVar6 = 4;
              }
              else if ((bVar2 & 0xfc) == 0xf8) {
                lVar6 = 5;
              }
              else {
                if ((bVar2 & 0xfe) != 0xfc) break;
                lVar6 = 6;
              }
            }
            else {
              lVar6 = 1;
            }
            pbVar5 = pbVar5 + lVar6;
            uVar4 = uVar4 + 1;
            bVar2 = *pbVar5;
          } while (bVar2 != 0 && (long)pbVar5 - (long)__s2 < (long)(ulong)uVar1);
          goto LAB_00227ba0;
        }
      }
      else if (*(int *)(param_3 + 0x18) == 2) {
        uVar4 = uVar1 >> 1;
LAB_00227ba0:
        if (uVar4 != 0) {
          (**(code **)(*param_2 + 0x28))(&local_34,param_2);
          FUN_00229780(param_1,&local_34);
          goto LAB_00227c7c;
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2);
LAB_00227c7c:
  local_2c = 0;
  local_34 = 8;
  (**(code **)(*param_2 + 0x20))(param_2,&local_34);
  return;
}

