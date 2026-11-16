
void FUN_026c3900(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 *__src;
  undefined1 local_b4 [127];
  undefined1 local_35;
  
  lVar5 = DAT_05ae7790;
  if ((DAT_05ae7790 != 0) &&
     (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
     *(long *)(lVar5 + 0x60) != lVar4)) {
    if ((DAT_05ae7790 != 0) &&
       (lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)), lVar5 != 0)) {
      plVar8 = (long *)(lVar5 + 0x20);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pcVar7 = *(char **)(lVar5 + 0x28);
      if (pcVar7 == "SceneLoad") {
LAB_026c39d0:
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        return;
      }
      if (*pcVar7 == 'S') {
        uVar3 = 0;
        do {
          uVar6 = uVar3;
          if ((uVar6 == 0x80000) || (pcVar7[uVar6 + 1] != "SceneLoad"[uVar6 + 1]))
          goto LAB_026c39e8;
          uVar3 = uVar6 + 1;
        } while (pcVar7[uVar6 + 1] != '\0');
        if (uVar6 < 0x80000) goto LAB_026c39d0;
      }
    }
LAB_026c39e8:
    local_35 = 0;
    local_b4[0] = 0;
    if ((DAT_05ae7790 != 0) &&
       (lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)), lVar5 != 0)) {
      plVar8 = (long *)(lVar5 + 0x20);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      __src = *(undefined1 **)(lVar5 + 0x28);
      if (local_b4 != __src) {
        (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))(plVar8);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(lVar5 + 0x28) + lVar4) == '\0') goto LAB_026c3aac;
          lVar1 = *(long *)(lVar5 + 0x28) + lVar4;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_026c3aac;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_026c3aac;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_026c3aac:
        iVar2 = (int)lVar4;
        if (0x7f < (int)lVar4) {
          iVar2 = 0x7f;
        }
        memcpy(local_b4,__src,(long)iVar2);
        local_b4[iVar2] = 0;
      }
    }
  }
  return;
}

