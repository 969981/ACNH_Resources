
void FUN_03c261b0(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  char *__src;
  undefined8 uVar2;
  long lVar3;
  char *__dest;
  long lVar4;
  undefined *local_158;
  char *local_150;
  undefined4 local_148;
  char local_144 [255];
  undefined1 local_45;
  
  local_45 = 0;
  local_148 = 0x100;
  local_144[0] = '\0';
  local_150 = local_144;
  local_158 = PTR_DAT_04bb21f8 + 0x10;
  if ((param_3 & 1) == 0) {
    uVar2 = (**(code **)(*DAT_05aecbf0 + 0x40))();
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_038d1270(&local_158,"%s/%s",uVar2,param_2[1]);
    lVar4 = *(long *)(param_1 + 0x260);
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_038d1270(&local_158,&DAT_0409e973,param_2[1]);
    lVar4 = *(long *)(param_1 + 0x260);
  }
  if ((lVar4 != 0) && (__dest = *(char **)(lVar4 + 0x18), *__dest == '\0')) {
    (**(code **)(local_158 + 0x18))(&local_158);
    __src = local_150;
    if (__dest != local_150) {
      (**(code **)(local_158 + 0x18))(&local_158);
      lVar3 = 0;
      do {
        if (local_150[lVar3] == '\0') goto LAB_03c262fc;
        if (local_150[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_03c262fc;
        }
        if (local_150[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_03c262fc;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_03c262fc:
      iVar1 = (int)lVar3;
      if (*(int *)(lVar4 + 0x20) <= (int)lVar3) {
        iVar1 = *(int *)(lVar4 + 0x20) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      __dest[iVar1] = '\0';
    }
    uVar2 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar4 + 0x138) = uVar2;
  }
  return;
}

