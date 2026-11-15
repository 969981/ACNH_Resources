
void FUN_020ef28c(char *param_1)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  short sVar5;
  byte bVar6;
  undefined *local_48;
  char *pcStack_40;
  uint local_34;
  
  cVar3 = *param_1;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "GotoEventPlazaForCountdown";
  local_48 = puVar1;
  local_34 = (int)cVar3;
  FUN_021be8c0(&local_34,&local_48,(long)param_1[1]);
  if (param_1[1] != '\0') {
    pcStack_40 = "ApproachUpdateStop";
    local_48 = puVar1;
    sVar5 = FUN_02196ed0(&local_34,&local_48);
    if (((sVar5 == 0) && ((uint)(int)cVar3 < 10)) &&
       ((&DAT_053fee41)[(ulong)(uint)(int)cVar3 * 0xba0] != '\0')) {
      lVar4 = (ulong)(uint)(int)cVar3 * 0xba0;
      bVar2 = (&DAT_053fe810)[lVar4];
      *(undefined4 *)(&DAT_053fe814 + lVar4) = 0;
      bVar6 = bVar2 >> 1;
      if (0x1e < bVar6) {
        bVar6 = 0x1f;
      }
      (&DAT_053fe810)[lVar4] = bVar6;
      (&DAT_053fe829)[lVar4] = 0x3f < bVar2;
    }
  }
  pcStack_40 = "ApproachUpdateStop";
  local_48 = puVar1;
  FUN_021be8c0(&local_34,&local_48,(long)param_1[1]);
  return;
}

